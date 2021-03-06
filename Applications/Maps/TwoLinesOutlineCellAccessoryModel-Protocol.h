//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UIAction, _UICellAccessoryConfiguration;
@protocol TwoLinesOutlineCellAccessoryDelegate;

@protocol TwoLinesOutlineCellAccessoryModel <NSObject>
@property(readonly, nonatomic) __weak id <TwoLinesOutlineCellAccessoryDelegate> delegate;
@property(readonly, nonatomic) long long visibility;
- (_UICellAccessoryConfiguration *)createAccessoryConfigurationWithAction:(UIAction *)arg1;
@end

