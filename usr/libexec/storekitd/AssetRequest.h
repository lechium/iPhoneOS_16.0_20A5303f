//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableURLRequest.h>

@class AssetRequestProperties, MISSING_TYPE;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000006622d
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000661ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006619c
- (id)copyRequestProperties;	// IMP=0x001000000006617f
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x0010000000066129
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x00100000000660d3
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x001000000006607d
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x0010000000066021
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000065f9b
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000065e0a

@end

