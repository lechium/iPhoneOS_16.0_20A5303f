//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPCalculationDatastore : NSObject
{
}

@property(readonly, nonatomic) unsigned int domain;
- (id)performQuery:(id)arg1;	// IMP=0x0010000000024c8d
- (void)preheat;	// IMP=0x0010000000024c87
- (void)deactivate;	// IMP=0x0010000000024c81
- (void)activate;	// IMP=0x0010000000024c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

