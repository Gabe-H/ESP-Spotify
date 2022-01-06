#include <Arduino.h>
// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Roboto_Condensed_13[] PROGMEM = {
	0x0B, // Width: 11
	0x11, // Height: 17
	0x20, // First Char: 32
	0xE0, // Numbers of Chars: 224

	// Jump Table:
	0xFF, 0xFF, 0x00, 0x03,  // 32:65535
	0x00, 0x00, 0x05, 0x03,  // 33:0
	0x00, 0x05, 0x07, 0x04,  // 34:5
	0x00, 0x0C, 0x13, 0x07,  // 35:12
	0x00, 0x1F, 0x11, 0x06,  // 36:31
	0x00, 0x30, 0x17, 0x08,  // 37:48
	0x00, 0x47, 0x14, 0x07,  // 38:71
	0x00, 0x5B, 0x04, 0x02,  // 39:91
	0x00, 0x5F, 0x0B, 0x04,  // 40:95
	0x00, 0x6A, 0x08, 0x04,  // 41:106
	0x00, 0x72, 0x0E, 0x06,  // 42:114
	0x00, 0x80, 0x11, 0x06,  // 43:128
	0x00, 0x91, 0x05, 0x03,  // 44:145
	0x00, 0x96, 0x08, 0x03,  // 45:150
	0x00, 0x9E, 0x05, 0x03,  // 46:158
	0x00, 0xA3, 0x0A, 0x05,  // 47:163
	0x00, 0xAD, 0x11, 0x06,  // 48:173
	0x00, 0xBE, 0x0B, 0x06,  // 49:190
	0x00, 0xC9, 0x11, 0x06,  // 50:201
	0x00, 0xDA, 0x0E, 0x06,  // 51:218
	0x00, 0xE8, 0x11, 0x06,  // 52:232
	0x00, 0xF9, 0x11, 0x06,  // 53:249
	0x01, 0x0A, 0x11, 0x06,  // 54:266
	0x01, 0x1B, 0x10, 0x06,  // 55:283
	0x01, 0x2B, 0x0E, 0x06,  // 56:299
	0x01, 0x39, 0x0E, 0x06,  // 57:313
	0x01, 0x47, 0x05, 0x03,  // 58:327
	0x01, 0x4C, 0x05, 0x03,  // 59:332
	0x01, 0x51, 0x0E, 0x06,  // 60:337
	0x01, 0x5F, 0x0E, 0x06,  // 61:351
	0x01, 0x6D, 0x0E, 0x06,  // 62:365
	0x01, 0x7B, 0x0D, 0x05,  // 63:379
	0x01, 0x88, 0x1A, 0x0A,  // 64:392
	0x01, 0xA2, 0x14, 0x07,  // 65:418
	0x01, 0xB6, 0x11, 0x07,  // 66:438
	0x01, 0xC7, 0x14, 0x07,  // 67:455
	0x01, 0xDB, 0x11, 0x07,  // 68:475
	0x01, 0xEC, 0x11, 0x06,  // 69:492
	0x01, 0xFD, 0x10, 0x06,  // 70:509
	0x02, 0x0D, 0x14, 0x08,  // 71:525
	0x02, 0x21, 0x14, 0x08,  // 72:545
	0x02, 0x35, 0x05, 0x03,  // 73:565
	0x02, 0x3A, 0x0E, 0x06,  // 74:570
	0x02, 0x48, 0x14, 0x07,  // 75:584
	0x02, 0x5C, 0x11, 0x06,  // 76:604
	0x02, 0x6D, 0x1A, 0x0A,  // 77:621
	0x02, 0x87, 0x14, 0x08,  // 78:647
	0x02, 0x9B, 0x14, 0x08,  // 79:667
	0x02, 0xAF, 0x13, 0x07,  // 80:687
	0x02, 0xC2, 0x14, 0x08,  // 81:706
	0x02, 0xD6, 0x14, 0x07,  // 82:726
	0x02, 0xEA, 0x11, 0x07,  // 83:746
	0x02, 0xFB, 0x10, 0x07,  // 84:763
	0x03, 0x0B, 0x11, 0x07,  // 85:779
	0x03, 0x1C, 0x13, 0x07,  // 86:796
	0x03, 0x2F, 0x1C, 0x0A,  // 87:815
	0x03, 0x4B, 0x14, 0x07,  // 88:843
	0x03, 0x5F, 0x13, 0x07,  // 89:863
	0x03, 0x72, 0x11, 0x07,  // 90:882
	0x03, 0x83, 0x08, 0x03,  // 91:899
	0x03, 0x8B, 0x0E, 0x05,  // 92:907
	0x03, 0x99, 0x05, 0x03,  // 93:921
	0x03, 0x9E, 0x0A, 0x05,  // 94:926
	0x03, 0xA8, 0x0E, 0x05,  // 95:936
	0x03, 0xB6, 0x07, 0x04,  // 96:950
	0x03, 0xBD, 0x0E, 0x06,  // 97:957
	0x03, 0xCB, 0x11, 0x06,  // 98:971
	0x03, 0xDC, 0x11, 0x06,  // 99:988
	0x03, 0xED, 0x0E, 0x06,  // 100:1005
	0x03, 0xFB, 0x11, 0x06,  // 101:1019
	0x04, 0x0C, 0x0A, 0x04,  // 102:1036
	0x04, 0x16, 0x0E, 0x06,  // 103:1046
	0x04, 0x24, 0x0E, 0x06,  // 104:1060
	0x04, 0x32, 0x05, 0x03,  // 105:1074
	0x04, 0x37, 0x05, 0x03,  // 106:1079
	0x04, 0x3C, 0x11, 0x06,  // 107:1084
	0x04, 0x4D, 0x05, 0x03,  // 108:1101
	0x04, 0x52, 0x1A, 0x0A,  // 109:1106
	0x04, 0x6C, 0x0E, 0x06,  // 110:1132
	0x04, 0x7A, 0x11, 0x07,  // 111:1146
	0x04, 0x8B, 0x11, 0x06,  // 112:1163
	0x04, 0x9C, 0x11, 0x07,  // 113:1180
	0x04, 0xAD, 0x0A, 0x04,  // 114:1197
	0x04, 0xB7, 0x0E, 0x06,  // 115:1207
	0x04, 0xC5, 0x08, 0x04,  // 116:1221
	0x04, 0xCD, 0x0E, 0x06,  // 117:1229
	0x04, 0xDB, 0x0E, 0x06,  // 118:1243
	0x04, 0xE9, 0x16, 0x08,  // 119:1257
	0x04, 0xFF, 0x0E, 0x06,  // 120:1279
	0x05, 0x0D, 0x0D, 0x05,  // 121:1293
	0x05, 0x1A, 0x0E, 0x06,  // 122:1306
	0x05, 0x28, 0x0B, 0x04,  // 123:1320
	0x05, 0x33, 0x05, 0x03,  // 124:1331
	0x05, 0x38, 0x0B, 0x04,  // 125:1336
	0x05, 0x43, 0x14, 0x08,  // 126:1347
	0x05, 0x57, 0x0B, 0x05,  // 127:1367
	0x05, 0x62, 0x0B, 0x05,  // 128:1378
	0x05, 0x6D, 0x0B, 0x05,  // 129:1389
	0x05, 0x78, 0x0B, 0x05,  // 130:1400
	0x05, 0x83, 0x0B, 0x05,  // 131:1411
	0x05, 0x8E, 0x0B, 0x05,  // 132:1422
	0x05, 0x99, 0x0B, 0x05,  // 133:1433
	0x05, 0xA4, 0x0B, 0x05,  // 134:1444
	0x05, 0xAF, 0x0B, 0x05,  // 135:1455
	0x05, 0xBA, 0x0B, 0x05,  // 136:1466
	0x05, 0xC5, 0x0B, 0x05,  // 137:1477
	0x05, 0xD0, 0x0B, 0x05,  // 138:1488
	0x05, 0xDB, 0x0B, 0x05,  // 139:1499
	0x05, 0xE6, 0x0B, 0x05,  // 140:1510
	0x05, 0xF1, 0x0B, 0x05,  // 141:1521
	0x05, 0xFC, 0x0B, 0x05,  // 142:1532
	0x06, 0x07, 0x0B, 0x05,  // 143:1543
	0x06, 0x12, 0x0B, 0x05,  // 144:1554
	0x06, 0x1D, 0x0B, 0x05,  // 145:1565
	0x06, 0x28, 0x0B, 0x05,  // 146:1576
	0x06, 0x33, 0x0B, 0x05,  // 147:1587
	0x06, 0x3E, 0x0B, 0x05,  // 148:1598
	0x06, 0x49, 0x0B, 0x05,  // 149:1609
	0x06, 0x54, 0x0B, 0x05,  // 150:1620
	0x06, 0x5F, 0x0B, 0x05,  // 151:1631
	0x06, 0x6A, 0x0B, 0x05,  // 152:1642
	0x06, 0x75, 0x0B, 0x05,  // 153:1653
	0x06, 0x80, 0x0B, 0x05,  // 154:1664
	0x06, 0x8B, 0x0B, 0x05,  // 155:1675
	0x06, 0x96, 0x0B, 0x05,  // 156:1686
	0x06, 0xA1, 0x0B, 0x05,  // 157:1697
	0x06, 0xAC, 0x0B, 0x05,  // 158:1708
	0x06, 0xB7, 0x0B, 0x05,  // 159:1719
	0xFF, 0xFF, 0x00, 0x03,  // 160:65535
	0x06, 0xC2, 0x05, 0x03,  // 161:1730
	0x06, 0xC7, 0x0E, 0x06,  // 162:1735
	0x06, 0xD5, 0x11, 0x07,  // 163:1749
	0x06, 0xE6, 0x1A, 0x09,  // 164:1766
	0x07, 0x00, 0x10, 0x06,  // 165:1792
	0x07, 0x10, 0x05, 0x03,  // 166:1808
	0x07, 0x15, 0x11, 0x07,  // 167:1813
	0x07, 0x26, 0x0D, 0x05,  // 168:1830
	0x07, 0x33, 0x1A, 0x0A,  // 169:1843
	0x07, 0x4D, 0x0B, 0x05,  // 170:1869
	0x07, 0x58, 0x0E, 0x05,  // 171:1880
	0x07, 0x66, 0x0E, 0x06,  // 172:1894
	0x07, 0x74, 0x08, 0x03,  // 173:1908
	0x07, 0x7C, 0x1A, 0x0A,  // 174:1916
	0x07, 0x96, 0x0D, 0x05,  // 175:1942
	0x07, 0xA3, 0x0A, 0x05,  // 176:1955
	0x07, 0xAD, 0x11, 0x06,  // 177:1965
	0x07, 0xBE, 0x0B, 0x04,  // 178:1982
	0x07, 0xC9, 0x0A, 0x04,  // 179:1993
	0x07, 0xD3, 0x07, 0x04,  // 180:2003
	0x07, 0xDA, 0x0E, 0x06,  // 181:2010
	0x07, 0xE8, 0x0E, 0x06,  // 182:2024
	0x07, 0xF6, 0x05, 0x03,  // 183:2038
	0x07, 0xFB, 0x05, 0x03,  // 184:2043
	0x08, 0x00, 0x08, 0x04,  // 185:2048
	0x08, 0x08, 0x0B, 0x05,  // 186:2056
	0x08, 0x13, 0x0E, 0x05,  // 187:2067
	0x08, 0x21, 0x17, 0x08,  // 188:2081
	0x08, 0x38, 0x17, 0x09,  // 189:2104
	0x08, 0x4F, 0x17, 0x09,  // 190:2127
	0x08, 0x66, 0x0E, 0x05,  // 191:2150
	0x08, 0x74, 0x14, 0x07,  // 192:2164
	0x08, 0x88, 0x14, 0x07,  // 193:2184
	0x08, 0x9C, 0x14, 0x07,  // 194:2204
	0x08, 0xB0, 0x14, 0x07,  // 195:2224
	0x08, 0xC4, 0x14, 0x07,  // 196:2244
	0x08, 0xD8, 0x14, 0x07,  // 197:2264
	0x08, 0xEC, 0x1D, 0x0B,  // 198:2284
	0x09, 0x09, 0x14, 0x07,  // 199:2313
	0x09, 0x1D, 0x11, 0x06,  // 200:2333
	0x09, 0x2E, 0x11, 0x06,  // 201:2350
	0x09, 0x3F, 0x11, 0x06,  // 202:2367
	0x09, 0x50, 0x11, 0x06,  // 203:2384
	0x09, 0x61, 0x05, 0x03,  // 204:2401
	0x09, 0x66, 0x07, 0x03,  // 205:2406
	0x09, 0x6D, 0x07, 0x03,  // 206:2413
	0x09, 0x74, 0x07, 0x03,  // 207:2420
	0x09, 0x7B, 0x14, 0x08,  // 208:2427
	0x09, 0x8F, 0x14, 0x08,  // 209:2447
	0x09, 0xA3, 0x14, 0x08,  // 210:2467
	0x09, 0xB7, 0x14, 0x08,  // 211:2487
	0x09, 0xCB, 0x14, 0x08,  // 212:2507
	0x09, 0xDF, 0x14, 0x08,  // 213:2527
	0x09, 0xF3, 0x14, 0x08,  // 214:2547
	0x0A, 0x07, 0x0E, 0x06,  // 215:2567
	0x0A, 0x15, 0x14, 0x08,  // 216:2581
	0x0A, 0x29, 0x11, 0x07,  // 217:2601
	0x0A, 0x3A, 0x11, 0x07,  // 218:2618
	0x0A, 0x4B, 0x11, 0x07,  // 219:2635
	0x0A, 0x5C, 0x11, 0x07,  // 220:2652
	0x0A, 0x6D, 0x13, 0x07,  // 221:2669
	0x0A, 0x80, 0x11, 0x07,  // 222:2688
	0x0A, 0x91, 0x11, 0x07,  // 223:2705
	0x0A, 0xA2, 0x0E, 0x06,  // 224:2722
	0x0A, 0xB0, 0x0E, 0x06,  // 225:2736
	0x0A, 0xBE, 0x0E, 0x06,  // 226:2750
	0x0A, 0xCC, 0x10, 0x06,  // 227:2764
	0x0A, 0xDC, 0x10, 0x06,  // 228:2780
	0x0A, 0xEC, 0x0E, 0x06,  // 229:2796
	0x0A, 0xFA, 0x1A, 0x09,  // 230:2810
	0x0B, 0x14, 0x11, 0x06,  // 231:2836
	0x0B, 0x25, 0x11, 0x06,  // 232:2853
	0x0B, 0x36, 0x11, 0x06,  // 233:2870
	0x0B, 0x47, 0x11, 0x06,  // 234:2887
	0x0B, 0x58, 0x11, 0x06,  // 235:2904
	0x0B, 0x69, 0x05, 0x03,  // 236:2921
	0x0B, 0x6E, 0x07, 0x03,  // 237:2926
	0x0B, 0x75, 0x07, 0x03,  // 238:2933
	0x0B, 0x7C, 0x07, 0x03,  // 239:2940
	0x0B, 0x83, 0x11, 0x07,  // 240:2947
	0x0B, 0x94, 0x0E, 0x06,  // 241:2964
	0x0B, 0xA2, 0x11, 0x07,  // 242:2978
	0x0B, 0xB3, 0x11, 0x07,  // 243:2995
	0x0B, 0xC4, 0x11, 0x07,  // 244:3012
	0x0B, 0xD5, 0x11, 0x07,  // 245:3029
	0x0B, 0xE6, 0x11, 0x07,  // 246:3046
	0x0B, 0xF7, 0x11, 0x07,  // 247:3063
	0x0C, 0x08, 0x11, 0x06,  // 248:3080
	0x0C, 0x19, 0x0E, 0x06,  // 249:3097
	0x0C, 0x27, 0x0E, 0x06,  // 250:3111
	0x0C, 0x35, 0x0E, 0x06,  // 251:3125
	0x0C, 0x43, 0x0E, 0x06,  // 252:3139
	0x0C, 0x51, 0x0D, 0x05,  // 253:3153
	0x0C, 0x5E, 0x11, 0x07,  // 254:3166
	0x0C, 0x6F, 0x0D, 0x05,  // 255:3183

	// Font Data:
	0x00,0x00,0x00,0xF0,0x17,	// 33
	0x00,0x00,0x00,0x38,0x00,0x00,0x38,	// 34
	0x00,0x00,0x00,0x40,0x02,0x00,0xC0,0x1F,0x00,0x70,0x02,0x00,0x40,0x1F,0x00,0xF0,0x02,0x00,0x40,	// 35
	0x00,0x00,0x00,0xE0,0x1C,0x00,0x10,0x31,0x00,0x18,0x11,0x00,0x70,0x1E,0x00,0x00,0x04,	// 36
	0x00,0x00,0x00,0xF0,0x00,0x00,0x90,0x0C,0x00,0x60,0x02,0x00,0x80,0x0D,0x00,0x60,0x12,0x00,0x00,0x12,0x00,0x00,0x0C,	// 37
	0x00,0x00,0x00,0x60,0x0E,0x00,0x90,0x11,0x00,0x90,0x13,0x00,0x70,0x1C,0x00,0x00,0x1E,0x00,0x00,0x10,	// 38
	0x00,0x00,0x00,0x38,	// 39
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x30,0x60,0x00,0x08,0x80,	// 40
	0x08,0x80,0x00,0x30,0x60,0x00,0xC0,0x1F,	// 41
	0x20,0x00,0x00,0xC0,0x01,0x00,0x70,0x00,0x00,0xC0,0x01,0x00,0x20,0x01,	// 42
	0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0xE0,0x0F,0x00,0x00,0x01,0x00,0x00,0x01,	// 43
	0x00,0x40,0x00,0x00,0x30,	// 44
	0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,	// 45
	0x00,0x00,0x00,0x00,0x10,	// 46
	0x00,0x20,0x00,0x00,0x1C,0x00,0x80,0x03,0x00,0x70,	// 47
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x70,0x1C,0x00,0xC0,0x07,	// 48
	0x00,0x00,0x00,0x20,0x00,0x00,0x10,0x00,0x00,0xF0,0x1F,	// 49
	0x00,0x00,0x00,0x60,0x18,0x00,0x10,0x14,0x00,0x10,0x12,0x00,0xF0,0x11,0x00,0x40,0x10,	// 50
	0x40,0x04,0x00,0x70,0x1C,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0xE0,0x0E,	// 51
	0x00,0x04,0x00,0x00,0x07,0x00,0xC0,0x04,0x00,0x30,0x04,0x00,0xF0,0x1F,0x00,0x00,0x04,	// 52
	0x00,0x00,0x00,0xE0,0x0D,0x00,0xB0,0x10,0x00,0x90,0x10,0x00,0x90,0x19,0x00,0x10,0x0F,	// 53
	0x00,0x00,0x00,0xE0,0x0F,0x00,0xB0,0x10,0x00,0x90,0x10,0x00,0x80,0x1F,0x00,0x00,0x06,	// 54
	0x00,0x00,0x00,0x10,0x10,0x00,0x10,0x1C,0x00,0x10,0x07,0x00,0xF0,0x00,0x00,0x30,	// 55
	0x00,0x00,0x00,0xE0,0x1E,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0xE0,0x1E,	// 56
	0xC0,0x00,0x00,0xF0,0x03,0x00,0x10,0x12,0x00,0x10,0x1A,0x00,0xE0,0x0F,	// 57
	0x00,0x00,0x00,0x40,0x10,	// 58
	0x00,0x40,0x00,0x40,0x30,	// 59
	0x00,0x00,0x00,0x00,0x03,0x00,0x80,0x07,0x00,0x80,0x04,0x00,0x40,0x08,	// 60
	0x00,0x00,0x00,0x40,0x02,0x00,0x40,0x02,0x00,0x40,0x02,0x00,0x40,0x02,	// 61
	0x00,0x00,0x00,0xC0,0x0C,0x00,0x80,0x04,0x00,0x80,0x07,0x00,0x00,0x03,	// 62
	0x20,0x00,0x00,0x30,0x00,0x00,0x10,0x17,0x00,0xB0,0x01,0x00,0x60,	// 63
	0x00,0x00,0x00,0x80,0x3F,0x00,0x60,0x40,0x00,0x30,0x9E,0x00,0x90,0x91,0x00,0x90,0x90,0x00,0x90,0xDF,0x00,0x20,0x10,0x00,0xC0,0x0F,	// 64
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC0,0x05,0x00,0x30,0x04,0x00,0xC0,0x05,0x00,0x00,0x0E,0x00,0x00,0x10,	// 65
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0xE0,0x0E,	// 66
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x60,0x0C,0x00,0x40,0x04,	// 67
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0xE0,0x0F,	// 68
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x10,0x10,	// 69
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0x10,	// 70
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x30,0x18,0x00,0x10,0x10,0x00,0x10,0x12,0x00,0x30,0x12,0x00,0x60,0x0E,	// 71
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0xF0,0x1F,	// 72
	0x00,0x00,0x00,0xF0,0x1F,	// 73
	0x00,0x04,0x00,0x00,0x1C,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0xF0,0x0F,	// 74
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x01,0x00,0x80,0x03,0x00,0x60,0x06,0x00,0x30,0x18,0x00,0x10,0x10,	// 75
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,	// 76
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x70,0x00,0x00,0x80,0x03,0x00,0x00,0x1C,0x00,0x00,0x1C,0x00,0xC0,0x03,0x00,0x70,0x00,0x00,0xF0,0x1F,	// 77
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x07,0x00,0x00,0x0C,0x00,0xF0,0x1F,	// 78
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x30,0x18,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x30,0x18,0x00,0xE0,0x0F,	// 79
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0xF0,0x01,0x00,0x40,	// 80
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x30,0x18,0x00,0x10,0x10,0x00,0x10,0x10,0x00,0x30,0x38,0x00,0xE0,0x2F,	// 81
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x01,0x00,0x10,0x01,0x00,0x10,0x07,0x00,0xF0,0x1C,0x00,0x00,0x10,	// 82
	0x00,0x00,0x00,0xE0,0x0C,0x00,0x90,0x11,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x60,0x0E,	// 83
	0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0xF0,0x1F,0x00,0x10,0x00,0x00,0x10,	// 84
	0x00,0x00,0x00,0xF0,0x0F,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0xF0,0x0F,	// 85
	0x10,0x00,0x00,0xF0,0x00,0x00,0x00,0x07,0x00,0x00,0x18,0x00,0x00,0x07,0x00,0xF0,0x00,0x00,0x10,	// 86
	0x10,0x00,0x00,0xF0,0x01,0x00,0x00,0x1E,0x00,0x00,0x0F,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0x00,0x0F,0x00,0x00,0x1E,0x00,0xF0,0x01,0x00,0x10,	// 87
	0x10,0x10,0x00,0x30,0x18,0x00,0xE0,0x0E,0x00,0x80,0x03,0x00,0xC0,0x06,0x00,0x30,0x18,0x00,0x10,0x10,	// 88
	0x10,0x00,0x00,0x70,0x00,0x00,0xC0,0x01,0x00,0x00,0x1F,0x00,0xC0,0x01,0x00,0x30,0x00,0x00,0x10,	// 89
	0x00,0x00,0x00,0x10,0x18,0x00,0x10,0x16,0x00,0x90,0x11,0x00,0xF0,0x10,0x00,0x30,0x10,	// 90
	0x00,0x00,0x00,0xFC,0x7F,0x00,0x04,0x40,	// 91
	0x10,0x00,0x00,0xF0,0x00,0x00,0x80,0x07,0x00,0x00,0x38,0x00,0x00,0x20,	// 92
	0x04,0x40,0x00,0xFC,0x7F,	// 93
	0x00,0x00,0x00,0xC0,0x00,0x00,0x30,0x00,0x00,0xC0,	// 94
	0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,	// 95
	0x08,0x00,0x00,0x08,0x00,0x00,0x10,	// 96
	0x00,0x00,0x00,0x80,0x1E,0x00,0x40,0x12,0x00,0x40,0x12,0x00,0xC0,0x1F,	// 97
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xC0,0x1F,0x00,0x00,0x07,	// 98
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xC0,0x18,0x00,0x00,0x09,	// 99
	0x00,0x07,0x00,0xC0,0x1F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xF8,0x1F,	// 100
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x12,0x00,0x40,0x12,0x00,0xC0,0x1B,0x00,0x00,0x02,	// 101
	0x40,0x00,0x00,0xF0,0x1F,0x00,0x58,0x00,0x00,0x48,	// 102
	0x00,0x07,0x00,0xC0,0xDF,0x00,0x40,0x90,0x00,0x40,0x90,0x00,0xC0,0x7F,	// 103
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xC0,0x1F,	// 104
	0x00,0x00,0x00,0xD0,0x1F,	// 105
	0x00,0x80,0x00,0xD0,0xFF,	// 106
	0x00,0x00,0x00,0xF8,0x1F,0x00,0x00,0x03,0x00,0x80,0x07,0x00,0x40,0x18,0x00,0x40,0x10,	// 107
	0x00,0x00,0x00,0xF8,0x1F,	// 108
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xC0,0x1F,0x00,0x80,0x1F,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x80,0x1F,	// 109
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0xC0,0x1F,	// 110
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0x80,0x0F,	// 111
	0x00,0x00,0x00,0xC0,0xFF,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xC0,0x1F,0x00,0x00,0x07,	// 112
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0x80,0x10,0x00,0xC0,0xFF,	// 113
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x40,0x00,0x00,0x40,	// 114
	0x00,0x00,0x00,0x80,0x19,0x00,0x40,0x12,0x00,0x40,0x12,0x00,0xC0,0x1C,	// 115
	0x40,0x00,0x00,0xF0,0x0F,0x00,0x40,0x10,	// 116
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0xC0,0x1F,	// 117
	0x00,0x00,0x00,0xC0,0x01,0x00,0x00,0x1E,0x00,0x00,0x1E,0x00,0xC0,0x01,	// 118
	0xC0,0x00,0x00,0x80,0x0F,0x00,0x00,0x1C,0x00,0xC0,0x03,0x00,0xC0,0x03,0x00,0x00,0x1C,0x00,0x80,0x0F,0x00,0xC0,	// 119
	0x40,0x10,0x00,0xC0,0x18,0x00,0x00,0x07,0x00,0x80,0x0D,0x00,0x40,0x18,	// 120
	0xC0,0x80,0x00,0x80,0x87,0x00,0x00,0x78,0x00,0x80,0x07,0x00,0xC0,	// 121
	0x00,0x00,0x00,0x40,0x18,0x00,0x40,0x16,0x00,0xC0,0x11,0x00,0xC0,0x10,	// 122
	0x00,0x02,0x00,0x00,0x07,0x00,0xF0,0x7D,0x00,0x08,0x40,	// 123
	0x00,0x00,0x00,0xF0,0x7F,	// 124
	0x08,0x40,0x00,0xF0,0x7D,0x00,0x00,0x07,0x00,0x00,0x02,	// 125
	0x00,0x00,0x00,0x00,0x03,0x00,0x80,0x00,0x00,0x80,0x01,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x80,0x01,	// 126
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 127
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 128
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 129
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 130
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 131
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 132
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 133
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 134
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 135
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 136
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 137
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 138
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 139
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 140
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 141
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 142
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 143
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 144
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 145
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 146
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 147
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 148
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 149
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 150
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 151
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 152
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 153
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 154
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 155
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 156
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 157
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 158
	0x00,0x00,0x00,0xF0,0x1F,0x00,0xD0,0x17,0x00,0xF0,0x1F,	// 159
	0x00,0x00,0x00,0x40,0x7F,	// 161
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x60,0x70,0x00,0xC0,0x18,	// 162
	0x00,0x00,0x00,0x00,0x11,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x10,0x10,0x00,0x20,0x10,	// 163
	0x00,0x00,0x00,0xE0,0x1F,0x00,0x40,0x08,0x00,0x20,0x10,0x00,0x20,0x10,0x00,0x20,0x10,0x00,0x40,0x08,0x00,0xE0,0x1F,0x00,0x40,0x10,	// 164
	0x10,0x00,0x00,0x70,0x05,0x00,0x80,0x1F,0x00,0x80,0x1F,0x00,0x70,0x05,0x00,0x10,	// 165
	0x00,0x00,0x00,0xF0,0x7D,	// 166
	0x00,0x00,0x00,0xE0,0x6F,0x00,0x90,0x88,0x00,0x10,0x89,0x00,0x10,0x91,0x00,0x60,0x7E,	// 167
	0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x10,	// 168
	0x80,0x03,0x00,0x40,0x04,0x00,0x20,0x08,0x00,0xD0,0x17,0x00,0x50,0x14,0x00,0x50,0x14,0x00,0xD0,0x16,0x00,0x20,0x08,0x00,0xC0,0x07,	// 169
	0x00,0x00,0x00,0xF0,0x01,0x00,0x50,0x01,0x00,0xF0,0x01,	// 170
	0x00,0x00,0x00,0x00,0x07,0x00,0x80,0x08,0x00,0x00,0x07,0x00,0x80,0x08,	// 171
	0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x07,	// 172
	0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,	// 173
	0x80,0x03,0x00,0x40,0x04,0x00,0x20,0x08,0x00,0xD0,0x17,0x00,0x50,0x11,0x00,0x50,0x11,0x00,0xD0,0x16,0x00,0x20,0x08,0x00,0xC0,0x07,	// 174
	0x00,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x10,	// 175
	0x00,0x00,0x00,0x70,0x00,0x00,0x50,0x00,0x00,0x70,	// 176
	0x00,0x00,0x00,0x00,0x11,0x00,0x00,0x11,0x00,0xE0,0x17,0x00,0x00,0x11,0x00,0x00,0x01,	// 177
	0x20,0x01,0x00,0x90,0x01,0x00,0x70,0x01,0x00,0x20,0x01,	// 178
	0x20,0x01,0x00,0x50,0x01,0x00,0x70,0x01,0x00,0xA0,	// 179
	0x00,0x00,0x00,0x10,0x00,0x00,0x08,	// 180
	0x00,0x00,0x00,0xC0,0xFF,0x00,0x00,0x10,0x00,0x00,0x10,0x00,0xC0,0x1F,	// 181
	0x00,0x00,0x00,0xE0,0x01,0x00,0xF0,0x03,0x00,0xF0,0x03,0x00,0xF0,0x1F,	// 182
	0x00,0x00,0x00,0x00,0x01,	// 183
	0x00,0x00,0x00,0x00,0xE0,	// 184
	0x00,0x00,0x00,0x20,0x00,0x00,0xF0,0x01,	// 185
	0x00,0x00,0x00,0xF0,0x01,0x00,0x10,0x01,0x00,0xF0,0x01,	// 186
	0x00,0x00,0x00,0x80,0x0D,0x00,0x00,0x02,0x00,0x80,0x0D,0x00,0x00,0x02,	// 187
	0x00,0x00,0x00,0x20,0x00,0x00,0xF0,0x09,0x00,0x00,0x06,0x00,0x00,0x09,0x00,0xC0,0x0E,0x00,0x20,0x1F,0x00,0x00,0x08,	// 188
	0x00,0x00,0x00,0x20,0x08,0x00,0xF0,0x07,0x00,0x00,0x01,0x00,0xC0,0x12,0x00,0x20,0x19,0x00,0x00,0x17,0x00,0x00,0x12,	// 189
	0x20,0x01,0x00,0x50,0x01,0x00,0x70,0x09,0x00,0xA0,0x06,0x00,0x00,0x09,0x00,0xC0,0x0E,0x00,0x20,0x1F,0x00,0x00,0x08,	// 190
	0x00,0x38,0x00,0x00,0x6C,0x00,0x40,0x43,0x00,0x00,0x60,0x00,0x00,0x20,	// 191
	0x00,0x10,0x00,0x02,0x0E,0x00,0xC2,0x05,0x00,0x34,0x04,0x00,0xC0,0x05,0x00,0x00,0x0E,0x00,0x00,0x10,	// 192
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC0,0x05,0x00,0x34,0x04,0x00,0xC2,0x05,0x00,0x00,0x0E,0x00,0x00,0x10,	// 193
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC4,0x05,0x00,0x32,0x04,0x00,0xC6,0x05,0x00,0x00,0x0E,0x00,0x00,0x10,	// 194
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC6,0x05,0x00,0x32,0x04,0x00,0xC4,0x05,0x00,0x02,0x0E,0x00,0x00,0x10,	// 195
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC4,0x05,0x00,0x30,0x04,0x00,0xC4,0x05,0x00,0x04,0x0E,0x00,0x00,0x10,	// 196
	0x00,0x10,0x00,0x00,0x0E,0x00,0xC2,0x05,0x00,0x35,0x04,0x00,0xC7,0x05,0x00,0x00,0x0E,0x00,0x00,0x10,	// 197
	0x00,0x10,0x00,0x00,0x1C,0x00,0x00,0x07,0x00,0xC0,0x05,0x00,0x70,0x04,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x10,0x11,0x00,0x10,0x11,	// 198
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x10,0x10,0x00,0x10,0xF0,0x00,0x10,0x10,0x00,0x60,0x0C,0x00,0x40,0x04,	// 199
	0x00,0x00,0x00,0xF2,0x1F,0x00,0x12,0x11,0x00,0x14,0x11,0x00,0x10,0x11,0x00,0x10,0x10,	// 200
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x14,0x11,0x00,0x12,0x11,0x00,0x10,0x10,	// 201
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x14,0x11,0x00,0x12,0x11,0x00,0x16,0x11,0x00,0x10,0x10,	// 202
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x14,0x11,0x00,0x10,0x11,0x00,0x14,0x11,0x00,0x14,0x10,	// 203
	0x02,0x00,0x00,0xF4,0x1F,	// 204
	0x00,0x00,0x00,0xF4,0x1F,0x00,0x02,	// 205
	0x04,0x00,0x00,0xF2,0x1F,0x00,0x06,	// 206
	0x04,0x00,0x00,0xF0,0x1F,0x00,0x04,	// 207
	0x00,0x01,0x00,0xF0,0x1F,0x00,0xF0,0x1F,0x00,0x10,0x11,0x00,0x10,0x10,0x00,0x30,0x08,0x00,0xC0,0x07,	// 208
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x66,0x00,0x00,0x82,0x01,0x00,0x04,0x07,0x00,0x02,0x0C,0x00,0xF0,0x1F,	// 209
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x32,0x18,0x00,0x12,0x10,0x00,0x14,0x10,0x00,0x30,0x18,0x00,0xE0,0x0F,	// 210
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x30,0x18,0x00,0x10,0x10,0x00,0x14,0x10,0x00,0x32,0x18,0x00,0xE0,0x0F,	// 211
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x34,0x18,0x00,0x12,0x10,0x00,0x16,0x10,0x00,0x30,0x18,0x00,0xE0,0x0F,	// 212
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x36,0x18,0x00,0x12,0x10,0x00,0x14,0x10,0x00,0x32,0x18,0x00,0xE0,0x0F,	// 213
	0x00,0x00,0x00,0xE0,0x0F,0x00,0x34,0x18,0x00,0x10,0x10,0x00,0x14,0x10,0x00,0x34,0x18,0x00,0xE0,0x0F,	// 214
	0x00,0x00,0x00,0xC0,0x0C,0x00,0x00,0x07,0x00,0x00,0x03,0x00,0xC0,0x0C,	// 215
	0x00,0x00,0x00,0xE0,0x1F,0x00,0x30,0x18,0x00,0x10,0x16,0x00,0x90,0x11,0x00,0x70,0x18,0x00,0xF0,0x0F,	// 216
	0x00,0x00,0x00,0xF2,0x0F,0x00,0x02,0x10,0x00,0x04,0x10,0x00,0x00,0x10,0x00,0xF0,0x0F,	// 217
	0x00,0x00,0x00,0xF0,0x0F,0x00,0x00,0x10,0x00,0x04,0x10,0x00,0x02,0x10,0x00,0xF0,0x0F,	// 218
	0x00,0x00,0x00,0xF0,0x0F,0x00,0x04,0x10,0x00,0x02,0x10,0x00,0x06,0x10,0x00,0xF0,0x0F,	// 219
	0x00,0x00,0x00,0xF0,0x0F,0x00,0x04,0x10,0x00,0x00,0x10,0x00,0x04,0x10,0x00,0xF4,0x0F,	// 220
	0x10,0x00,0x00,0x70,0x00,0x00,0xC0,0x01,0x00,0x04,0x1F,0x00,0xC2,0x01,0x00,0x30,0x00,0x00,0x10,	// 221
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x40,0x04,0x00,0x40,0x04,0x00,0x40,0x04,0x00,0x80,0x03,	// 222
	0x00,0x00,0x00,0xF0,0x1F,0x00,0x08,0x00,0x00,0x88,0x10,0x00,0xF8,0x13,0x00,0x00,0x1E,	// 223
	0x00,0x00,0x00,0x88,0x1E,0x00,0x48,0x12,0x00,0x50,0x12,0x00,0xC0,0x1F,	// 224
	0x00,0x00,0x00,0x80,0x1E,0x00,0x40,0x12,0x00,0x50,0x12,0x00,0xC8,0x1F,	// 225
	0x00,0x00,0x00,0x80,0x1E,0x00,0x50,0x12,0x00,0x48,0x12,0x00,0xD8,0x1F,	// 226
	0x00,0x00,0x00,0x80,0x1E,0x00,0x58,0x12,0x00,0x48,0x12,0x00,0xD0,0x1F,0x00,0x08,	// 227
	0x00,0x00,0x00,0x80,0x1E,0x00,0x50,0x12,0x00,0x40,0x12,0x00,0xD0,0x1F,0x00,0x10,	// 228
	0x00,0x00,0x00,0x88,0x1E,0x00,0x54,0x12,0x00,0x5C,0x12,0x00,0xC0,0x1F,	// 229
	0x00,0x0D,0x00,0xC0,0x16,0x00,0x40,0x12,0x00,0x40,0x12,0x00,0x80,0x0F,0x00,0x40,0x12,0x00,0x40,0x12,0x00,0xC0,0x1A,0x00,0x00,0x13,	// 230
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x40,0xF0,0x00,0xC0,0x18,0x00,0x00,0x09,	// 231
	0x00,0x00,0x00,0x88,0x0F,0x00,0x48,0x12,0x00,0x50,0x12,0x00,0xC0,0x1B,0x00,0x00,0x02,	// 232
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x12,0x00,0x50,0x12,0x00,0xC8,0x1B,0x00,0x00,0x02,	// 233
	0x00,0x00,0x00,0x90,0x0F,0x00,0x48,0x12,0x00,0x58,0x12,0x00,0xC0,0x1B,0x00,0x00,0x02,	// 234
	0x00,0x00,0x00,0x90,0x0F,0x00,0x40,0x12,0x00,0x50,0x12,0x00,0xD0,0x1B,0x00,0x00,0x02,	// 235
	0x08,0x00,0x00,0xD0,0x1F,	// 236
	0x00,0x00,0x00,0xD0,0x1F,0x00,0x08,	// 237
	0x10,0x00,0x00,0xC8,0x1F,0x00,0x18,	// 238
	0x10,0x00,0x00,0xC0,0x1F,0x00,0x10,	// 239
	0x00,0x00,0x00,0x00,0x0F,0x00,0xA8,0x19,0x00,0xB0,0x10,0x00,0xF8,0x18,0x00,0xD0,0x0F,	// 240
	0x00,0x00,0x00,0xD8,0x1F,0x00,0x48,0x00,0x00,0x50,0x00,0x00,0xC8,0x1F,	// 241
	0x00,0x00,0x00,0x88,0x0F,0x00,0x48,0x10,0x00,0x50,0x10,0x00,0x40,0x10,0x00,0x80,0x0F,	// 242
	0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x50,0x10,0x00,0x48,0x10,0x00,0x80,0x0F,	// 243
	0x00,0x00,0x00,0x90,0x0F,0x00,0x48,0x10,0x00,0x58,0x10,0x00,0x40,0x10,0x00,0x80,0x0F,	// 244
	0x00,0x00,0x00,0x98,0x0F,0x00,0x48,0x10,0x00,0x50,0x10,0x00,0x48,0x10,0x00,0x80,0x0F,	// 245
	0x00,0x00,0x00,0x80,0x0F,0x00,0x50,0x10,0x00,0x40,0x10,0x00,0x50,0x10,0x00,0x90,0x0F,	// 246
	0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x40,0x05,0x00,0x00,0x01,0x00,0x00,0x01,	// 247
	0x00,0x07,0x00,0x80,0x3F,0x00,0x40,0x1E,0x00,0x40,0x11,0x00,0xE0,0x1D,0x00,0x00,0x07,	// 248
	0x00,0x00,0x00,0xC8,0x1F,0x00,0x08,0x10,0x00,0x10,0x10,0x00,0xC0,0x1F,	// 249
	0x00,0x00,0x00,0xC0,0x1F,0x00,0x00,0x10,0x00,0x10,0x10,0x00,0xC8,0x1F,	// 250
	0x00,0x00,0x00,0xD0,0x1F,0x00,0x08,0x10,0x00,0x18,0x10,0x00,0xC0,0x1F,	// 251
	0x00,0x00,0x00,0xD0,0x1F,0x00,0x00,0x10,0x00,0x10,0x10,0x00,0xD0,0x1F,	// 252
	0xC0,0x80,0x00,0x80,0x87,0x00,0x10,0x78,0x00,0x88,0x07,0x00,0xC0,	// 253
	0x00,0x00,0x00,0xF8,0xFF,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xC0,0x18,0x00,0x80,0x0F,	// 254
	0xC0,0x80,0x00,0x90,0x87,0x00,0x00,0x78,0x00,0x90,0x07,0x00,0xD0	// 255
};