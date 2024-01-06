#!/usr/bin/python3
"""Fetches the URL: https://intranet.hbtn.io/status
with `urllib` module
"""

from urllib import request

if __name__ == "__main__":
    url = 'https://intranet.hbtn.io/status'

    with request.urlopen(url) as response:
        html = response.read().decode('utf-8')

    print('Body response:')
    print('\t- type: {}'.format(type(html)))
    print('\t- content: {}'.format(html))

