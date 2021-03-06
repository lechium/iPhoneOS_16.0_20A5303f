//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WFContentCollection;

@interface WFHandoffRunRequest : NSObject
{
    NSString *_actionIdentifier;	// 8 = 0x8
    WFContentCollection *_input;	// 16 = 0x10
    NSDictionary *_serializedParameters;	// 24 = 0x18
    NSDictionary *_processedParameters;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000824f3
+ (id)handoffRunRequestWithActionIdentifier:(id)arg1 input:(id)arg2 serializedParameters:(id)arg3 processedParameters:(id)arg4;	// IMP=0x0010000000082449
+ (id)handoffRunRequestWithActionIdentifier:(id)arg1 input:(id)arg2 serializedParameters:(id)arg3;	// IMP=0x0010000000082434
- (void).cxx_destruct;	// IMP=0x00200000000823f6
@property(readonly, nonatomic) NSDictionary *processedParameters; // @synthesize processedParameters=_processedParameters;
@property(readonly, nonatomic) NSDictionary *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(readonly, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property(readonly, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000008217d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000082065
- (id)initWithActionIdentifier:(id)arg1 input:(id)arg2 serializedParameters:(id)arg3 processedParameters:(id)arg4;	// IMP=0x0010000000081f1b

@end

