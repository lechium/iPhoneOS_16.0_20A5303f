//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface BCAlertActionItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subTitle;	// 16 = 0x10
    unsigned long long _actionType;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
    UIImage *_icon;	// 40 = 0x28
    NSString *_iconName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000004dda
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 iconName:(id)arg3 actionType:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004b53

@end
