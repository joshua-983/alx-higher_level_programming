#!/usr/bin/python3
"""0x11. Python - Network #1, task 0. What's my status? #0
"""

if __name__ == "__main__":
    # Importing the request module from urllib library
    from urllib import request

    # Opening a connection to 'https://intranet.hbtn.io/status'
    with request.urlopen('https://intranet.hbtn.io/status') as response:
        # Reading the response data
        html = response.read()

    # Printing information about the response
    print('Body response:')
    print('\t- type: {}'.format(type(html)))  # Printing type of data
    print('\t- content: {}'.format(html))  # Printing content of response
    print('\t- utf8 content: {}'.format(html.decode('utf-8')))  # Decoding and printing content in UTF-8
    # The charset can be obtained using response.headers.get_content_charset()

