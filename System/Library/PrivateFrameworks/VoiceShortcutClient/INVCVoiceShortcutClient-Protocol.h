//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class FPSandboxingURLWrapper, NSArray, NSData, NSDictionary, NSString;

@protocol INVCVoiceShortcutClient <NSObject>
- (FPSandboxingURLWrapper *)resolveBookmarkData:(NSData *)arg1 updatedData:(id *)arg2 error:(id *)arg3;
- (void)sendAceCommandDictionary:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 inDomain:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)getVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
@end

