
/*
 * Copyright (c) 2006-2018 RT-Thread Development Team. All rights reserved.
 * License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "mbedtls/certs.h"

const char mbedtls_root_certificate[] = 
"-----BEGIN CERTIFICATE-----\r\n" \
"MIIDSjCCAjKgAwIBAgIQRK+wgNajJ7qJMDmGLvhAazANBgkqhkiG9w0BAQUFADA/\r\n" \
"MSQwIgYDVQQKExtEaWdpdGFsIFNpZ25hdHVyZSBUcnVzdCBDby4xFzAVBgNVBAMT\r\n" \
"DkRTVCBSb290IENBIFgzMB4XDTAwMDkzMDIxMTIxOVoXDTIxMDkzMDE0MDExNVow\r\n" \
"PzEkMCIGA1UEChMbRGlnaXRhbCBTaWduYXR1cmUgVHJ1c3QgQ28uMRcwFQYDVQQD\r\n" \
"Ew5EU1QgUm9vdCBDQSBYMzCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEB\r\n" \
"AN+v6ZdQCINXtMxiZfaQguzH0yxrMMpb7NnDfcdAwRgUi+DoM3ZJKuM/IUmTrE4O\r\n" \
"rz5Iy2Xu/NMhD2XSKtkyj4zl93ewEnu1lcCJo6m67XMuegwGMoOifooUMM0RoOEq\r\n" \
"OLl5CjH9UL2AZd+3UWODyOKIYepLYYHsUmu5ouJLGiifSKOeDNoJjj4XLh7dIN9b\r\n" \
"xiqKqy69cK3FCxolkHRyxXtqqzTWMIn/5WgTe1QLyNau7Fqckh49ZLOMxt+/yUFw\r\n" \
"7BZy1SbsOFU5Q9D8/RhcQPGX69Wam40dutolucbY38EVAjqr2m7xPi71XAicPNaD\r\n" \
"aeQQmxkqtilX4+U9m5/wAl0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNV\r\n" \
"HQ8BAf8EBAMCAQYwHQYDVR0OBBYEFMSnsaR7LHH62+FLkHX/xBVghYkQMA0GCSqG\r\n" \
"SIb3DQEBBQUAA4IBAQCjGiybFwBcqR7uKGY3Or+Dxz9LwwmglSBd49lZRNI+DT69\r\n" \
"ikugdB/OEIKcdBodfpga3csTS7MgROSR6cz8faXbauX+5v3gTt23ADq1cEmv8uXr\r\n" \
"AvHRAosZy5Q6XkjEGB5YGV8eAlrwDPGxrancWYaLbumR9YbK+rlmM6pZW87ipxZz\r\n" \
"R8srzJmwN0jP41ZL9c8PDHIyh8bwRLtTcm1D9SZImlJnt1ir/md2cXjbDaJWFBM5\r\n" \
"JDGFoqgCWjBH4d1QB7wCCZAA62RjYJsWvIjJEubSfZGL+T0yjWW06XyxV3bqxbYo\r\n" \
"Ob8VZRzI9neWagqNdwvYkQsEjgfbKbYK7p2CNTUQ\r\n" \
"-----END CERTIFICATE-----\r\n" \
"-----BEGIN CERTIFICATE-----\r\n" \
"MIIEAzCCAuugAwIBAgIUQifLqeK29g5cLw4SD0s9SBNmNicwDQYJKoZIhvcNAQEL\r\n" \
"BQAwgZAxCzAJBgNVBAYTAkNOMRIwEAYDVQQIDAlndWFuZ2RvbmcxETAPBgNVBAcM\r\n" \
"CHNoZW56aGVuMREwDwYDVQQKDAhDQW1hc3RlcjENMAsGA1UECwwEVEVTVDEWMBQG\r\n" \
"A1UEAwwNMTkyLjE2OC4xLjEwNDEgMB4GCSqGSIb3DQEJARYRcy53LnRAZm94bWFp\r\n" \
"bC5jb20wHhcNMTkwOTE1MTM0MjUzWhcNMjQwOTE0MTM0MjUzWjCBkDELMAkGA1UE\r\n" \
"BhMCQ04xEjAQBgNVBAgMCWd1YW5nZG9uZzERMA8GA1UEBwwIc2hlbnpoZW4xETAP\r\n" \
"BgNVBAoMCENBbWFzdGVyMQ0wCwYDVQQLDARURVNUMRYwFAYDVQQDDA0xOTIuMTY4\r\n" \
"LjEuMTA0MSAwHgYJKoZIhvcNAQkBFhFzLncudEBmb3htYWlsLmNvbTCCASIwDQYJ\r\n" \
"KoZIhvcNAQEBBQADggEPADCCAQoCggEBANW+EuCaN16iCWYTbPsE4ny5NhQHAOJV\r\n" \
"5TZXOsOLwa/2PZqIj5vQsR0qpbbcMguspof1r9XEMP/tpgST1iIgOomL75MbQQGc\r\n" \
"ih3WIJe5+qP9tmvJkLaNGz8mTOgax176r+OTiT/hlCp42Sq9r+yjDcSCipGtmtdX\r\n" \
"kN09Pfq0HjvyxIc2qTAdvBmVLYVkPKVPvItXYQ6YMYHkuWEqvjkmldgrAy9t6zca\r\n" \
"UQ63Ey0W2c0HTmGeXlMUK8OwlIJKXAwQ8a6XSj34wVlNFLwz29W6yGF9D5Jvd16C\r\n" \
"OAO0Z4jwzihwV0W4NtpTitKpR+vPmb1g+JNU8aQhV9Kps4riOhvo37ECAwEAAaNT\r\n" \
"MFEwHQYDVR0OBBYEFFeZjh21ZEkdoflGJXqgRBi4DN+hMB8GA1UdIwQYMBaAFFeZ\r\n" \
"jh21ZEkdoflGJXqgRBi4DN+hMA8GA1UdEwEB/wQFMAMBAf8wDQYJKoZIhvcNAQEL\r\n" \
"BQADggEBAI2dCWFZywHdtHhqsPin7edm/DxERg77yOq6qRxkxTlZ6vi0lJQ4oxPl\r\n" \
"4W8VshCS/ouFqwSJmIWiUpqTb18vRye/2slb5bqHlr0J0JqTBPtuRsvaeT9PLPOv\r\n" \
"k3cy2rkzYfkfExd4uQLKmYeKeaWn1yle4Kaj/Bh1JwopugvmVyFrst4VJyM5snyt\r\n" \
"f8R6y5XJNAtC/fzOw236dU+w4dpAOnsJ6RDy1hLR2tmknD2lxxN0TNO3UDVtx28X\r\n" \
"oRPA3ZJwxXjpHGT1RFceU/La/TP/hBvM1gsyoXYvQef+xBz7LnP6FyBch1jCOob1\r\n" \
"x3tQSEp6a0ng36Q4P8MKueE4SCN1DHw=\r\n" \
"-----END CERTIFICATE-----\r\n" \
"-----BEGIN CERTIFICATE-----\r\n" \
"MIIC8DCCAlmgAwIBAgIJAOD63PlXjJi8MA0GCSqGSIb3DQEBBQUAMIGQMQswCQYD\r\n" \
"VQQGEwJHQjEXMBUGA1UECAwOVW5pdGVkIEtpbmdkb20xDjAMBgNVBAcMBURlcmJ5\r\n" \
"MRIwEAYDVQQKDAlNb3NxdWl0dG8xCzAJBgNVBAsMAkNBMRYwFAYDVQQDDA1tb3Nx\r\n" \
"dWl0dG8ub3JnMR8wHQYJKoZIhvcNAQkBFhByb2dlckBhdGNob28ub3JnMB4XDTEy\r\n" \
"MDYyOTIyMTE1OVoXDTIyMDYyNzIyMTE1OVowgZAxCzAJBgNVBAYTAkdCMRcwFQYD\r\n" \
"VQQIDA5Vbml0ZWQgS2luZ2RvbTEOMAwGA1UEBwwFRGVyYnkxEjAQBgNVBAoMCU1v\r\n" \
"c3F1aXR0bzELMAkGA1UECwwCQ0ExFjAUBgNVBAMMDW1vc3F1aXR0by5vcmcxHzAd\r\n" \
"BgkqhkiG9w0BCQEWEHJvZ2VyQGF0Y2hvby5vcmcwgZ8wDQYJKoZIhvcNAQEBBQAD\r\n" \
"gY0AMIGJAoGBAMYkLmX7SqOT/jJCZoQ1NWdCrr/pq47m3xxyXcI+FLEmwbE3R9vM\r\n" \
"rE6sRbP2S89pfrCt7iuITXPKycpUcIU0mtcT1OqxGBV2lb6RaOT2gC5pxyGaFJ+h\r\n" \
"A+GIbdYKO3JprPxSBoRponZJvDGEZuM3N7p3S/lRoi7G5wG5mvUmaE5RAgMBAAGj\r\n" \
"UDBOMB0GA1UdDgQWBBTad2QneVztIPQzRRGj6ZHKqJTv5jAfBgNVHSMEGDAWgBTa\r\n" \
"d2QneVztIPQzRRGj6ZHKqJTv5jAMBgNVHRMEBTADAQH/MA0GCSqGSIb3DQEBBQUA\r\n" \
"A4GBAAqw1rK4NlRUCUBLhEFUQasjP7xfFqlVbE2cRy0Rs4o3KS0JwzQVBwG85xge\r\n" \
"REyPOFdGdhBY2P1FNRy0MDr6xr+D2ZOwxs63dG1nnAnWZg7qwoLgpZ4fESPD3PkA\r\n" \
"1ZgKJc2zbSQ9fCPxt2W3mdVav66c6fsb7els2W2Iz7gERJSX\r\n" \
"-----END CERTIFICATE-----\r\n" \

;

const size_t mbedtls_root_certificate_len = sizeof(mbedtls_root_certificate);

