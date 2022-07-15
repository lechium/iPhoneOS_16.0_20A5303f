//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCArticle;
@protocol NULinkedContentProvider;

@protocol NULinkedContentProviderFactory <NSObject>
- (id <NULinkedContentProvider>)createLinkedContentProviderForArticle:(FCArticle *)arg1;
@end
