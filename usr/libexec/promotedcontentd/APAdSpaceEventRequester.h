//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APAdSpaceEventRequester
{
    int _statusCode;	// 8 = 0x8
}

- (id)protoBuffer;	// IMP=0x002000000004a685
- (void)makeDelayedRequest:(double)arg1 requestSentHandler:(CDUnknownBlockType)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a608
- (void)makeRequest:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a42a
@property int statusCode; // @synthesize statusCode=_statusCode;
- (_Bool)isAllowedEmptyResponse;	// IMP=0x000000000004a33c
- (Class)responseClass;	// IMP=0x001000000004a32b
- (id)initWithMetric:(id)arg1 internalContent:(id)arg2 andContext:(id)arg3 idAccount:(id)arg4;	// IMP=0x001000000004a150

@end
