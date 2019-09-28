#include "leerIMdB.h"

size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream) {
    string data((const char*) ptr, (size_t) size * nmemb);
    *((stringstream*) stream) << data << endl;
    return size * nmemb;
}
HTTPDownloader::HTTPDownloader() {
    curl = curl_easy_init();
}
HTTPDownloader::~HTTPDownloader() {
    curl_easy_cleanup(curl);
}
string HTTPDownloader::download(const std::string& url) {
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    /* example.com is redirected, so we tell libcurl to follow redirection */
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1); //Prevent "longjmp causes uninitialized stack frame" bug
    curl_easy_setopt(curl, CURLOPT_ACCEPT_ENCODING, "deflate");
    std::stringstream out;
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &out);
    /* Perform the request, res will get the return code */
    CURLcode res = curl_easy_perform(curl);
    /* Check for errors */
    if (res != CURLE_OK) {
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));
    }
    return out.str();
}
string HTTPDownloader::getImageURL(string data)
{
    string urltemp;
    string url;
    urltemp=data.substr(data.find("<link rel='image_src' href=")+28);
    url=urltemp.substr(0,urltemp.find(".jpg")+4);
    return url;


}

string HTTPDownloader::getTrailerURL(string data)
{
    string urltemp;
    string url;
    urltemp=data.substr(data.find("<a href=\"/video")+9);
    url=urltemp.substr(0,urltemp.find("\""));
    url="https://www.imdb.com"+url;

    return url;
}