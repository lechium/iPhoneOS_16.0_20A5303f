//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlay/CPTemplateDelegate-Protocol.h>

@class NSString, NSUUID;

@protocol CPSearchClientTemplateDelegate <CPTemplateDelegate>
- (void)searchTemplateSearchButtonPressedWithIdentifier:(NSUUID *)arg1;
- (void)searchTemplateWithIdentifier:(NSUUID *)arg1 selectedResultWithIdentifier:(NSUUID *)arg2 completionHandler:(void (^)(void))arg3;
- (void)searchTemplateWithIdentifier:(NSUUID *)arg1 updateSearchResultsForSearchText:(NSString *)arg2 completionResults:(void (^)(NSArray *))arg3;
@end
