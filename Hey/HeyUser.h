//
//  HeyUser.h
//  Hey
//
//  Created by Jiahe Kuang on 9/29/14.
//  Copyright (c) 2014 Jiahe Kuang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface HeyUser : NSObject

@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *userGender;
@property (nonatomic, strong) UIImage *userImage;
@property (nonatomic, strong) NSMutableArray *friendList;
@property (nonatomic, strong) NSMutableArray *groupList;



@end
