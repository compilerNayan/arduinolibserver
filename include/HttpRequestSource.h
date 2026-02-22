#ifndef HTTPREQUESTSOURCE_H
#define HTTPREQUESTSOURCE_H

/**
 * Source of the HTTP request/response (which server received or will send it).
 */
enum class RequestSource {
    LocalServer,
    CloudServer
};

#endif // HTTPREQUESTSOURCE_H
