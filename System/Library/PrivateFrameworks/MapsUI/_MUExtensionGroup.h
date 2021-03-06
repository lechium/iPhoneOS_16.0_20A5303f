//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppleMediaServicesResult, NSMutableArray, NSString, _MXExtension;

__attribute__((visibility("hidden")))
@interface _MUExtensionGroup : NSObject
{
    NSMutableArray *_extensions;	// 8 = 0x8
    NSString *_appIdentifier;	// 16 = 0x10
    GEOAppleMediaServicesResult *_appStoreApp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c1d1c
@property(retain, nonatomic) GEOAppleMediaServicesResult *appStoreApp; // @synthesize appStoreApp=_appStoreApp;
@property(readonly, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)initWithAppIdentifier:(id)arg1;	// IMP=0x00000000000c1c72
- (void)addExtensionIfMatchedAppIdentifier:(id)arg1;	// IMP=0x00000000000c1bf2
@property(readonly, nonatomic) _MXExtension *bestExtensionToUse;

@end

