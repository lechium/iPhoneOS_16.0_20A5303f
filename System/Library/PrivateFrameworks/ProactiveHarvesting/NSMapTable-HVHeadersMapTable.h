//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

@class NSString;

@interface NSMapTable (HVHeadersMapTable)
+ (id)hv_headerValueFunctions;	// IMP=0x001000000000b902
+ (id)hv_headerKeyFunctions;	// IMP=0x001000000000b89f
- (id)hv_firstHeaderForKey:(id)arg1;	// IMP=0x001000000000b70c
- (void)hv_addEntriesFromHeadersDictionary:(id)arg1;	// IMP=0x001000000000b6ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

