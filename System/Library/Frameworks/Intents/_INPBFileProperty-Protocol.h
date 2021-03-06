//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@protocol _INPBFileProperty <NSObject>
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _INPBFilePropertyValue *value;
@property(nonatomic) _Bool hasQualifier;
@property(nonatomic) int qualifier;
@property(nonatomic) _Bool hasName;
@property(nonatomic) int name;
- (int)StringAsQualifier:(NSString *)arg1;
- (NSString *)qualifierAsString:(int)arg1;
- (int)StringAsName:(NSString *)arg1;
- (NSString *)nameAsString:(int)arg1;
@end

