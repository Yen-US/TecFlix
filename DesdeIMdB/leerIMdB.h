//
// Created by yenus on 15/9/19.
//

#ifndef TECFLIX_LEERIMDB_H
#define TECFLIX_LEERIMDB_H

#include <string>
/**
 * A non-threadsafe simple libcURL-easy based HTTP downloader
 */
class HTTPDownloader {
public:
    HTTPDownloader();
    ~HTTPDownloader();
    /**
     * Download a file using HTTP GET and store in in a std::string
     * @param url The URL to download
     * @return The download result
     */
    std::string download(const std::string& url);
    string getImageURL(string data);
private:
    void* curl;
};
#endif  /* HTTPDOWNLOADER_HPP */
