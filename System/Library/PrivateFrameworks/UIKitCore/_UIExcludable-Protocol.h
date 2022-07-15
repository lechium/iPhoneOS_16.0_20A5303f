//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString;
@protocol _UIExcludable;

@protocol _UIExcludable <NSObject>
- (NSString *)_briefDescription;
- (void)_exclude;
- (_Bool)_isExcludedByExcludable:(id <_UIExcludable>)arg1;
- (_Bool)_canExcludeOtherExcludables;
@end
