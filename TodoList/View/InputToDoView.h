//
//  InputToDoView.h
//  TodoList
//
//  Created by 土橋正晴 on 2019/12/24.
//  Copyright © 2019 m.dobashi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface InputToDoView : UIView<UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>

@property NSString *todotitle;
@property NSString *tododate;
@property NSString *tododetail;

@end

NS_ASSUME_NONNULL_END
