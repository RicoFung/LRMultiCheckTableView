//
//  LRMultiCheckTableView.h
//  MultiUITableView
//
//  Created by mac373 on 16/4/7.
//  Copyright © 2016年 ole. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LRMultiCheckTableViewDelegate<NSObject>
@required
- (NSString *)didLoadDataToViewL;
- (NSString *)didLoadDataToViewR:(id)itemViewL;
@end

@interface LRMultiCheckTableView : UIView <UITableViewDataSource,UITableViewDelegate>
{
     id <LRMultiCheckTableViewDelegate> delegate;
}
// setter
- (void)setDelegate:(id <LRMultiCheckTableViewDelegate>)_delegate;
// getter
- (id <LRMultiCheckTableViewDelegate>)delegate;

@property (nonatomic, strong) NSArray     *arrL;
@property (nonatomic, strong) NSArray     *arrR;
@property (nonatomic, strong) UITableView *tb_l;
@property (nonatomic, strong) UITableView *tb_r;
@property (nonatomic, strong) UIView      *bar_bottom;
@property (nonatomic, strong) UIButton    *btn_reset;
@property (nonatomic, strong) UIButton    *btn_ok;

@property NSInteger *curIndex;

/* 已选数组集合，数据结构：

 {key:[1,2,3,...]},
 {key:[1,2,3,...]},
 {key:[1,2,3,...]},
 ...
 */
@property (nonatomic, strong) NSMutableDictionary *dataSelected;

@end
