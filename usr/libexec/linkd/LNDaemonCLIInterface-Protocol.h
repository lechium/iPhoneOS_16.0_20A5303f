//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LNDaemonCLIInterface <NSObject>
- (void)vocabularyForBundleWithIdentifier:(NSString *)arg1 localeIdentifier:(NSString *)arg2 loadVocabularyFromTrial:(_Bool)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
@end
