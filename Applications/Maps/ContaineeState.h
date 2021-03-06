//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol ContaineeProtocol;

@interface ContaineeState : NSObject
{
    unsigned long long layoutByStyle[10];	// 8 = 0x8
    UIViewController<ContaineeProtocol> *_viewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000001399bc
@property(retain, nonatomic) UIViewController<ContaineeProtocol> *viewController; // @synthesize viewController=_viewController;
- (unsigned long long)layoutForStyle:(unsigned long long)arg1;	// IMP=0x0010000000139996
- (void)setLayout:(unsigned long long)arg1 forStyle:(unsigned long long)arg2;	// IMP=0x001000000013995b
- (id)initWithContainee:(id)arg1;	// IMP=0x00100000001398f0

@end

