//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIShareTemplateViewElement *_templateElement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b8501
- (id)item;	// IMP=0x00000000001b81be
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x00000000001b80f1
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;	// IMP=0x00000000001b8048

@end

