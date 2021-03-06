//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBIntentExecutionResult <NSObject>
@property(nonatomic) _Bool hasEncodingFormat;
@property(nonatomic) int encodingFormat;
@property(readonly, nonatomic) _Bool hasEncodedIntentResponse;
@property(copy, nonatomic) NSString *encodedIntentResponse;
@property(readonly, nonatomic) _Bool hasEncodedIntent;
@property(copy, nonatomic) NSString *encodedIntent;
- (int)StringAsEncodingFormat:(NSString *)arg1;
- (NSString *)encodingFormatAsString:(int)arg1;
@end

