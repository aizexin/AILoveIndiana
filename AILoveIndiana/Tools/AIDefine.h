//
//  AIDefine.h
//  AIweichat
//
//  Created by qianfeng on 15/9/7.
//  Copyright (c) 2015年 aizexin. All rights reserved.
//

#ifndef AIweichat_AIDefine_h
#define AIweichat_AIDefine_h

#define AILog(...) NSLog(__VA_ARGS__)
#define Mainsize ([[UIScreen mainScreen]bounds].size)

#endif
// 抢购
#define URL_QG @"http://api.1.9117zhuan.com/index"

// 奖品详情
//#define URL_JPXQ @"http://api.1.9117zhuan.com/product_detail?productid=%@"
#define URL_JPXQ @"http://api.1.9117zhuan.com/product_detail?productid=%@&os=iPhone%208.1.2&time=1431487684&ver=1.7.0&platform=1&device=5DE6721E-C32E-4941-A76F-A22A7E20D69B&iphonename=B.T.%F0%9F%93%B1&is_jailbreak=0&isp=%E4%B8%AD%E5%9B%BD%E7%A7%BB%E5%8A%A8"

// 所有参与记录
#define URL_CYJL @"http://api.1.9117zhuan.com/product_bills?productid=%@&pageNo=1"

// 往期揭晓
#define URL_WQJX @"http://api.1.9117zhuan.com/history_win_bills?productid=%@&pageNo=%d"

// 晒单
#define URL_SD @"http://api.1.9117zhuan.com/show_showbill?brand_id=%@&pageNo=%d"

// 计算结果
#define URL_JSJQ @"http://api.1.9117zhuan.com/show_compute_panel?productid=%@"

// 查看ta的号码
#define URL_HM @"http://api.1.9117zhuan.com/search_luck_nums?user_id=%@&productid=%@"

// 最新揭晓 详情
#define URL_ZXJX @"http://api.1.9117zhuan.com/product_newest_open?productid=%@"



// 全部商品
#define URL_SP @"http://api.1.9117zhuan.com/products?pageNo=%d"


// 最新揭晓
#define URL_JX @"http://api.1.9117zhuan.com/new_publish?pageNo=%d"
