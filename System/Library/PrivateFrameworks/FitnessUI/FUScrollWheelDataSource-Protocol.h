//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUScrollWheel, NSString;

@protocol FUScrollWheelDataSource <NSObject>
- (NSString *)scrollWheel:(FUScrollWheel *)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInScrollWheel:(FUScrollWheel *)arg1;
@end

