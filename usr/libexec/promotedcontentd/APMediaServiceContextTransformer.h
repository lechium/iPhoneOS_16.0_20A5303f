//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMediaServiceRequestParameters;

@interface APMediaServiceContextTransformer : NSObject
{
    APMediaServiceRequestParameters *_params;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000101efe
@property(retain, nonatomic) APMediaServiceRequestParameters *params; // @synthesize params=_params;
- (void)_addFrequencyCappingDataToRequestDictionary:(id)arg1 fromSupplementalContext:(id)arg2;	// IMP=0x0010000000101e28
- (void)_addImpressionCap:(id)arg1 clickCap:(id)arg2 toDictionary:(id)arg3;	// IMP=0x0010000000101cbb
- (id)_odmlProperties;	// IMP=0x0010000000101ca2
- (id)_contextDictionary;	// IMP=0x0010000000101c89
- (id)_capArray:(id)arg1;	// IMP=0x0010000000101a2f
- (id)_requestDebugInfo;	// IMP=0x00100000001018e8
- (id)_locationDictionary;	// IMP=0x0010000000101548
- (id)_propertiesDictionary;	// IMP=0x0010000000100c5a
- (id)_adRequestDictionary;	// IMP=0x00100000001009f3
- (id)_typeDictionary;	// IMP=0x001000000010092f
- (id)transformedContextJSON:(id *)arg1;	// IMP=0x00100000001006cb
- (id)initWithParams:(id)arg1;	// IMP=0x00100000001005e1

@end

