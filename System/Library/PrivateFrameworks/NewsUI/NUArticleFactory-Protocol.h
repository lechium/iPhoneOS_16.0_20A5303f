//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle, NSArray;
@protocol FCHeadlineProviding;

@protocol NUArticleFactory <NSObject>
- (FCArticle *)createArticleForHeadline:(id <FCHeadlineProviding>)arg1;
- (NSArray *)createArticlesForArticleIDs:(NSArray *)arg1;
@end

