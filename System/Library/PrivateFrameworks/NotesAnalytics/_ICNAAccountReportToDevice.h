//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _ICNAAccountReportToDevice : NSObject
{
    NSMutableDictionary *_countOfAccountsByType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b920
@property(retain, nonatomic) NSMutableDictionary *countOfAccountsByType; // @synthesize countOfAccountsByType=_countOfAccountsByType;
- (id)accountTypeSummary;	// IMP=0x000000000000b6c2
- (void)reportAccountType:(long long)arg1;	// IMP=0x000000000000b588
- (id)init;	// IMP=0x000000000000b532

@end
