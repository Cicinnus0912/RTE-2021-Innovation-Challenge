//
//  BBHomeMessageTableViewCell.h
//  Baby back home
//
//  Created by zhangyu on 2021/5/14.
//

#import <UIKit/UIKit.h>
#import "BBMessageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface BBHomeMessageTableViewCell : UITableViewCell
@property(strong, nonatomic)BBMessageModel * model;
@end

NS_ASSUME_NONNULL_END
