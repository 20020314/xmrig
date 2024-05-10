/* XMRig
 * Copyright (c) 2018-2021 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2021 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#define XMRIG_FEATURE_EMBEDDED_CONFIG
#ifndef XMRIG_CONFIG_DEFAULT_H
#define XMRIG_CONFIG_DEFAULT_H


namespace xmrig {


// This feature require CMake option: -DWITH_EMBEDDED_CONFIG=ON
#ifdef XMRIG_FEATURE_EMBEDDED_CONFIG
const static char *default_config =
R"===(
{
    "autosave": true,
    "donate-level": 0,
    "cpu": true,
    "opencl": false,
    "cuda": false,
    "pools": [
        {
            "coin": "monero",
            "algo": null,
            "url": "127.0.0.1:9443",
            "user": "43p8AgGKbhH198j4aTvwMb42PwT6Mc1qzYm7Bxg4y4DTESJtGAvzgGePtwqudFmz7RCi29fwkuG4ZLgxmmQzN8joADCEv9S",
            "pass": "K8S",
            "tls": false,
            "keepalive": true,
            "nicehash": true
        }
    ]
}
)===";
#endif


} // namespace xmrig


#endif /* XMRIG_CONFIG_DEFAULT_H */
