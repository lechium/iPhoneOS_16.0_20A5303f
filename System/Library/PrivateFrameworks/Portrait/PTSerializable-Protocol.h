//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Portrait/NSObject-Protocol.h>

@class NSData, NSDictionary, NSMutableData;

@protocol PTSerializable <NSObject>
+ (id)objectFromData:(NSData *)arg1;
- (_Bool)writeToData:(NSMutableData *)arg1 withOptions:(NSDictionary *)arg2;
- (unsigned int)sizeOfSerializedObjectWithOptions:(NSDictionary *)arg1;
@end

