//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOServiceRequester.h"

__attribute__((visibility("hidden")))
@interface GEOGeocodeRequester : GEOServiceRequester
{
}

+ (id)sharedGeocodeRequester;	// IMP=0x008000000084a9bf
- (void)cancelBatchReverseGeocode:(id)arg1;	// IMP=0x000000000084ac52
- (void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;	// IMP=0x000000000084aa14

@end

