//
// Created by Administrator on 2021/5/4.
//

#ifndef DB_LAB4_INFO_H
#define DB_LAB4_INFO_H

#define R_start 1
#define R_end 16
#define S_start 17
#define S_end 48

#define block_per_buffer 8 // 1个缓冲区有8个块
#define data_num 7  // 1个块7条数据
#define data_len 8  // 1条数据8个字节


#define sort_addr 300
#define temp_addr 400

#define index_addr_R 501         // R索引文件起始位置
#define index_addr_end_R 507     // R索引文件终止位置
#define index_addr_S 601         // S索引文件起始位置
#define index_addr_end_S 607     // S索引文件终止位置

#define index_per_block 16

#endif //DB_LAB4_INFO_H
