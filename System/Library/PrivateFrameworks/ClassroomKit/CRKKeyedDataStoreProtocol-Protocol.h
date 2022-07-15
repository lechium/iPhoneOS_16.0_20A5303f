//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CRKKeyedDataStoreProtocol <NSObject>
- (_Bool)removeAllDataWithError:(id *)arg1;
- (_Bool)removeDataForKey:(NSString *)arg1 error:(id *)arg2;
- (NSData *)dataForKey:(NSString *)arg1 error:(id *)arg2;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
@end
