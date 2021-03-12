struct type_4byte {
	char b0;
	char b1;
	char b2;
	char b3;
};

struct type_2byte {
	char b0;
	char b1;
};

static inline int A(int __var) {
	return 1;
}

typedef struct type_4byte i32_t;
typedef struct type_2byte i16_t;

#define FC_ADD_RANGE	0x0001
struct ext4_fc_add_range {
	// __le32 fc_ino;
	i32_t ino;
	// __u8 fc_ex[12]
	i32_t ee_block;
	i16_t ee_len;
	i16_t ee_start_hi;
	i32_t ee_start_lo;
};

#define FC_DEL_RANGE	0x0002
struct ext4_fc_del_range {
	i32_t ino;
	i32_t lblk;
	i32_t len;
};

#define FC_INODE	0x0006
struct ext4_fc_inode {
	i32_t ino;
};

#define FC_HEAD		0x0009
struct ext4_fc_head {
	i16_t features;
	i32_t tid;
};


#define FC_CREATE	0x0003
#define FC_LINK		0x0004
#define FC_UNLINK	0x0005

#define FC_TAIL		0x0008
struct ext4_fc_tail {
	i32_t tid;
	i32_t crc;
};
