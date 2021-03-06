//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, WBSReaderConfigurationManager, WBSReaderFont, WBSReaderFontManager;

@protocol SFReaderContext <NSObject>
@property(readonly, nonatomic) long long currentAppearance;
- (void)activateFont:(NSString *)arg1;
- (void)checkReaderAvailability;
- (void)resetReaderTextSize;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (_Bool)canDecreaseReaderTextSize;
- (_Bool)canIncreaseReaderTextSize;
- (void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderFont:(WBSReaderFont *)arg1;
- (void)collectReaderContentForMailWithCompletion:(void (^)(NSString *))arg1;
- (WBSReaderFontManager *)fontManager;
- (WBSReaderConfigurationManager *)configurationManager;
- (NSURL *)readerURL;
- (void)clearUnusedReaderResourcesSoon;
- (void)loadNewArticle;
- (void)clearAvailability;
- (void)createArticleFinder;
- (NSDictionary *)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned long long)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
@end

