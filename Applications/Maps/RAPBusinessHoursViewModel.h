//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RAPStoreHour;

@interface RAPBusinessHoursViewModel : NSObject
{
    RAPStoreHour *_hours;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a1a8b
@property(readonly, copy) NSString *daysStringValue;
@property(readonly, copy) NSString *hoursStringValue;
- (id)initWithStoreHours:(id)arg1;	// IMP=0x00100000001a1932

@end
