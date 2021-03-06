/**
 * \file
 *
 * \brief MAIN configuration.
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

/** security information for Wi-Fi connection */
#define MAIN_WLAN_SSID					"DEMO_AP" /**< Destination SSID */
#define MAIN_WLAN_802_1X_USR_NAME       "user" /**< RADIUS user account name */

const uint8_t modulus[256] = {
	0xF5, 0xFD, 0x8D, 0x94, 0x0A, 0xCC, 0x23, 0xB9, 0x9B, 0xBA, 0x39, 0xD6, 0x47, 0x46, 0x4D,
	0x78, 0xC3, 0xCD, 0xD0, 0x42, 0xFE, 0xD2, 0x74, 0xF2, 0xE4, 0x39, 0x47, 0x6F, 0x94, 0xD0,
	0x66, 0xE1, 0x68, 0x43, 0x22, 0x8E, 0x21, 0xAE, 0xE9, 0x6F, 0x13, 0xAE, 0x0B, 0xDC, 0x3E,
	0xF5, 0xF9, 0x79, 0x6F, 0x9A, 0x9F, 0x41, 0x6E, 0x84, 0x5E, 0x6F, 0x6D, 0x02, 0x78, 0x8C,
	0x6A, 0x5C, 0xD9, 0x5B, 0xD1, 0x55, 0x41, 0x09, 0x5D, 0xED, 0x0A, 0xEF, 0xFF, 0xC9, 0x58,
	0x9A, 0x6B, 0x3F, 0x1A, 0x19, 0x8D, 0x8A, 0x86, 0xF8, 0x78, 0x78, 0x3A, 0xA1, 0x6F, 0x01,
	0x01, 0xA1, 0xC1, 0x46, 0x6C, 0x6F, 0xDB, 0xD5, 0x32, 0x12, 0x27, 0x19, 0xC9, 0x50, 0xBB,
	0xEF, 0xD0, 0x93, 0x07, 0x7C, 0xE7, 0x67, 0x51, 0xE1, 0x89, 0x09, 0x2E, 0xF3, 0xCA, 0x26,
	0x92, 0x58, 0x9A, 0xA0, 0xAA, 0x1E, 0x11, 0x62, 0x85, 0x3A, 0xDD, 0x78, 0x98, 0x94, 0xC0,
	0xF8, 0x9C, 0x40, 0x35, 0xFC, 0x2F, 0xE5, 0x67, 0xCF, 0x9D, 0x7C, 0xE4, 0xC4, 0xFE, 0xFA,
	0x05, 0xE7, 0xEB, 0x5E, 0xDF, 0xAB, 0xB3, 0xF9, 0xCA, 0x88, 0xE4, 0xD7, 0x7A, 0xAD, 0x46,
	0x40, 0x66, 0x62, 0xED, 0xA3, 0x24, 0x79, 0xB0, 0x95, 0x6A, 0x0E, 0xFC, 0xF4, 0x28, 0x81,
	0x26, 0x77, 0x28, 0x86, 0x41, 0xE2, 0x15, 0xCD, 0x8D, 0x80, 0x4A, 0x9A, 0xEB, 0xA7, 0xAA,
	0x29, 0x27, 0x59, 0x71, 0xC8, 0x3E, 0xBF, 0x1D, 0xE4, 0x80, 0xA1, 0x5A, 0xAA, 0x4F, 0x62,
	0x5D, 0x9E, 0x5A, 0x11, 0x90, 0x22, 0x16, 0x1A, 0xE9, 0xF6, 0x2A, 0xD0, 0xB8, 0xC6, 0xFA,
	0x89, 0x8D, 0x31, 0x19, 0xD6, 0x09, 0xC1, 0x2D, 0xE1, 0xA8, 0x5D, 0x0C, 0x4D, 0x48, 0x38,
	0xAC, 0x49, 0x66, 0xC5, 0x98, 0x01, 0x2F, 0xB6, 0xFC, 0xB1, 0x28, 0x1A, 0x42, 0x98, 0x5D,
	0xAB,
};


const uint8_t exponent[256] = {
	0x84, 0x48, 0x7C, 0xD9, 0x4E, 0xD1, 0x26, 0xA9, 0x0A, 0xA8, 0xA3, 0xAF, 0xAA, 0x96, 0x90,
	0xD4, 0xCF, 0x9F, 0x1F, 0x4E, 0xD7, 0xCF, 0xFF, 0x5A, 0x1B, 0x06, 0xFE, 0x76, 0x6F, 0xB5,
	0x7E, 0x8D, 0xDA, 0xCE, 0xB7, 0x87, 0x6D, 0x6F, 0xAD, 0x52, 0xB1, 0x67, 0x98, 0x33, 0x31,
	0x9C, 0x7F, 0x33, 0x21, 0xA4, 0x29, 0xDE, 0x3A, 0xFB, 0x6D, 0xF9, 0x47, 0xCA, 0xDB, 0x5E,
	0xCF, 0x57, 0xEC, 0xFF, 0x66, 0x5C, 0x0D, 0x64, 0x67, 0x21, 0x31, 0x0F, 0x8D, 0x23, 0x0E,
	0xC5, 0xC3, 0xC4, 0xA4, 0x59, 0x77, 0x77, 0x36, 0x4B, 0xEA, 0x24, 0xE5, 0x8A, 0xA8, 0xB2,
	0x06, 0xD9, 0xA0, 0xA1, 0x29, 0x71, 0x21, 0xEB, 0xCD, 0x48, 0x5B, 0xC4, 0x8F, 0x31, 0x1E,
	0x4F, 0xC1, 0x7F, 0x3F, 0xB8, 0x98, 0x8C, 0x44, 0x49, 0x1F, 0xB3, 0x53, 0x8F, 0x80, 0x77,
	0x2B, 0x9E, 0x00, 0x51, 0x44, 0x0A, 0x75, 0x57, 0xD2, 0xD8, 0xB4, 0x16, 0xB9, 0x82, 0x22,
	0x22, 0xC5, 0xB9, 0xC1, 0x1A, 0x9D, 0x2C, 0x8B, 0xD7, 0x2D, 0x7D, 0xC5, 0xC1, 0xB8, 0x40,
	0x6E, 0xB2, 0xB7, 0xF2, 0x7C, 0xB5, 0x73, 0x3B, 0x3E, 0x74, 0x25, 0x8F, 0x64, 0xD4, 0xBF,
	0xDC, 0x6C, 0x02, 0x44, 0x91, 0xB6, 0x80, 0x9B, 0x5C, 0x51, 0xE5, 0x6C, 0x6C, 0xD9, 0x6D,
	0x52, 0x8D, 0xA2, 0x63, 0xBE, 0x40, 0x63, 0xE8, 0xB2, 0x9C, 0xD9, 0x7F, 0x57, 0x68, 0xED,
	0xC2, 0x88, 0x80, 0xFA, 0x69, 0x96, 0x8C, 0xDD, 0xFE, 0xF0, 0x16, 0xF7, 0xCE, 0x3F, 0x9C,
	0xC6, 0x05, 0xF6, 0xA0, 0xE7, 0xBE, 0xC2, 0xAA, 0x59, 0x18, 0xAB, 0x5E, 0x10, 0xB3, 0x79,
	0x3A, 0x8B, 0x14, 0xEE, 0xB8, 0xB5, 0x32, 0x2B, 0xFB, 0xE6, 0x3C, 0x99, 0xAE, 0x6D, 0xC2,
	0xC0, 0x04, 0x3E, 0x46, 0xBA, 0x59, 0xFC, 0xBF, 0xB7, 0xD2, 0xFE, 0x2F, 0x40, 0x7A, 0x8F,
	0x11,
};


const uint8_t certificate[719] = {
	0x30, 0x82, 0x02, 0xcb, 0x30, 0x82, 0x01, 0xb3, 0x02, 0x01, 0x01, 0x30, 0x0d, 0x06, 0x09,
	0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x30, 0x25, 0x31, 0x0b,
	0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x67, 0x68, 0x31, 0x0a, 0x30, 0x08,
	0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x01, 0x64, 0x31, 0x0a, 0x30, 0x08, 0x06, 0x03, 0x55,
	0x04, 0x0a, 0x0c, 0x01, 0x66, 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x39, 0x30, 0x31, 0x32, 0x34,
	0x30, 0x34, 0x32, 0x34, 0x33, 0x31, 0x5a, 0x17, 0x0d, 0x32, 0x30, 0x30, 0x31, 0x32, 0x34,
	0x30, 0x34, 0x32, 0x34, 0x33, 0x31, 0x5a, 0x30, 0x32, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
	0x55, 0x04, 0x06, 0x13, 0x02, 0x75, 0x6a, 0x31, 0x0a, 0x30, 0x08, 0x06, 0x03, 0x55, 0x04,
	0x08, 0x0c, 0x01, 0x66, 0x31, 0x0a, 0x30, 0x08, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x01,
	0x6a, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x02, 0x66, 0x74, 0x30,
	0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
	0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01,
	0x01, 0x00, 0xf5, 0xfd, 0x8d, 0x94, 0x0a, 0xcc, 0x23, 0xb9, 0x9b, 0xba, 0x39, 0xd6, 0x47,
	0x46, 0x4d, 0x78, 0xc3, 0xcd, 0xd0, 0x42, 0xfe, 0xd2, 0x74, 0xf2, 0xe4, 0x39, 0x47, 0x6f,
	0x94, 0xd0, 0x66, 0xe1, 0x68, 0x43, 0x22, 0x8e, 0x21, 0xae, 0xe9, 0x6f, 0x13, 0xae, 0x0b,
	0xdc, 0x3e, 0xf5, 0xf9, 0x79, 0x6f, 0x9a, 0x9f, 0x41, 0x6e, 0x84, 0x5e, 0x6f, 0x6d, 0x02,
	0x78, 0x8c, 0x6a, 0x5c, 0xd9, 0x5b, 0xd1, 0x55, 0x41, 0x09, 0x5d, 0xed, 0x0a, 0xef, 0xff,
	0xc9, 0x58, 0x9a, 0x6b, 0x3f, 0x1a, 0x19, 0x8d, 0x8a, 0x86, 0xf8, 0x78, 0x78, 0x3a, 0xa1,
	0x6f, 0x01, 0x01, 0xa1, 0xc1, 0x46, 0x6c, 0x6f, 0xdb, 0xd5, 0x32, 0x12, 0x27, 0x19, 0xc9,
	0x50, 0xbb, 0xef, 0xd0, 0x93, 0x07, 0x7c, 0xe7, 0x67, 0x51, 0xe1, 0x89, 0x09, 0x2e, 0xf3,
	0xca, 0x26, 0x92, 0x58, 0x9a, 0xa0, 0xaa, 0x1e, 0x11, 0x62, 0x85, 0x3a, 0xdd, 0x78, 0x98,
	0x94, 0xc0, 0xf8, 0x9c, 0x40, 0x35, 0xfc, 0x2f, 0xe5, 0x67, 0xcf, 0x9d, 0x7c, 0xe4, 0xc4,
	0xfe, 0xfa, 0x05, 0xe7, 0xeb, 0x5e, 0xdf, 0xab, 0xb3, 0xf9, 0xca, 0x88, 0xe4, 0xd7, 0x7a,
	0xad, 0x46, 0x40, 0x66, 0x62, 0xed, 0xa3, 0x24, 0x79, 0xb0, 0x95, 0x6a, 0x0e, 0xfc, 0xf4,
	0x28, 0x81, 0x26, 0x77, 0x28, 0x86, 0x41, 0xe2, 0x15, 0xcd, 0x8d, 0x80, 0x4a, 0x9a, 0xeb,
	0xa7, 0xaa, 0x29, 0x27, 0x59, 0x71, 0xc8, 0x3e, 0xbf, 0x1d, 0xe4, 0x80, 0xa1, 0x5a, 0xaa,
	0x4f, 0x62, 0x5d, 0x9e, 0x5a, 0x11, 0x90, 0x22, 0x16, 0x1a, 0xe9, 0xf6, 0x2a, 0xd0, 0xb8,
	0xc6, 0xfa, 0x89, 0x8d, 0x31, 0x19, 0xd6, 0x09, 0xc1, 0x2d, 0xe1, 0xa8, 0x5d, 0x0c, 0x4d,
	0x48, 0x38, 0xac, 0x49, 0x66, 0xc5, 0x98, 0x01, 0x2f, 0xb6, 0xfc, 0xb1, 0x28, 0x1a, 0x42,
	0x98, 0x5d, 0xab, 0x02, 0x03, 0x01, 0x00, 0x01, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
	0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x75, 0x74,
	0xc4, 0xb4, 0xf6, 0x77, 0x83, 0x35, 0x40, 0x0a, 0x51, 0x5e, 0x10, 0xa1, 0x7b, 0x99, 0x73,
	0x25, 0xa5, 0x63, 0xc3, 0x6f, 0x00, 0xad, 0xd0, 0x26, 0x56, 0xff, 0x07, 0xe5, 0x59, 0xf9,
	0xdb, 0x43, 0x20, 0x77, 0x80, 0x83, 0x61, 0x19, 0x8b, 0xf0, 0xe4, 0x6c, 0x15, 0x9f, 0x97,
	0x30, 0x1a, 0x6c, 0xf1, 0x28, 0xe0, 0x1d, 0x03, 0xad, 0xfc, 0xff, 0x37, 0x56, 0xb0, 0xf4,
	0xdb, 0xe2, 0xa5, 0xe9, 0xa3, 0x04, 0xb0, 0x65, 0x6c, 0x0f, 0xd3, 0xdd, 0xe2, 0x02, 0xb5,
	0x46, 0x20, 0x4c, 0x42, 0x0d, 0xbc, 0x2e, 0x26, 0xeb, 0x25, 0xe0, 0x43, 0x8a, 0x76, 0xb0,
	0x79, 0xea, 0x10, 0xd7, 0x62, 0xcf, 0x62, 0xd3, 0x57, 0x65, 0xf0, 0xfd, 0x0f, 0x94, 0x86,
	0x19, 0xc8, 0x35, 0x4a, 0x1c, 0x27, 0x02, 0x6e, 0x4e, 0x62, 0xc8, 0xde, 0x3f, 0x43, 0x2c,
	0xc4, 0x37, 0x82, 0xeb, 0xe6, 0x7b, 0xb7, 0xbf, 0xd6, 0x80, 0x4e, 0x42, 0x23, 0x13, 0x92,
	0x9b, 0x6e, 0xa8, 0xb9, 0xb3, 0xd6, 0xde, 0x42, 0x2f, 0x0a, 0x8d, 0x0e, 0xb6, 0xa2, 0x0b,
	0x2a, 0xd2, 0x80, 0x28, 0x93, 0xc4, 0xf7, 0x29, 0x23, 0x73, 0x36, 0x67, 0x70, 0x31, 0x1a,
	0x98, 0x55, 0xb9, 0x04, 0x3d, 0x46, 0x35, 0x6e, 0x57, 0x42, 0x0d, 0x3a, 0x34, 0x1b, 0x57,
	0x41, 0x10, 0xfe, 0x27, 0x5d, 0x10, 0x8f, 0x0d, 0x3e, 0xe7, 0xca, 0xeb, 0x34, 0x75, 0x33,
	0x2a, 0x36, 0x92, 0x9d, 0x42, 0x19, 0xcb, 0x5d, 0x14, 0xb9, 0xed, 0x9e, 0xf2, 0x57, 0x27,
	0xc4, 0xd7, 0x0d, 0x22, 0x11, 0xaf, 0xe7, 0x1a, 0x86, 0xae, 0x3f, 0x4d, 0xe6, 0x1c, 0x40,
	0xf8, 0x1a, 0x6e, 0x39, 0xed, 0x58, 0x8a, 0x76, 0x82, 0xe1, 0x6b, 0x7d, 0x64, 0x05, 0xd5,
	0xa8, 0x62, 0x77, 0x4b, 0x07, 0x47, 0xc9, 0x31, 0x37, 0xb2, 0xee, 0x60, 0x60, 0xa9,
};




#ifdef __cplusplus
}
#endif

#endif /* MAIN_H_INCLUDED */
