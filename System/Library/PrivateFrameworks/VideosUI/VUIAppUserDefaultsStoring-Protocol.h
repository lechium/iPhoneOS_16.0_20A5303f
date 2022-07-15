//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol NSCoding;

@protocol VUIAppUserDefaultsStoring <NSObject>
- (void)setData:(NSObject<NSCoding> *)arg1 forKey:(NSString *)arg2;
- (void)removeDataForKey:(NSString *)arg1;
- (NSObject<NSCoding> *)dataForKey:(NSString *)arg1;
@end
