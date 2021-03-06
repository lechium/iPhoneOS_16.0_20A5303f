//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSString, TVImageProxy, UIAlertController;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateController_iOS : UIViewController
{
    NSMutableArray *_additionalLabels;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
    NSArray *_buttonElements;	// 24 = 0x18
    TVImageProxy *_imageProxy;	// 32 = 0x20
    struct CGSize _imageSize;	// 40 = 0x28
    NSString *_message;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000055ec8
- (void)_presentAlertController;	// IMP=0x0000000000055861
- (void)_dismissAlertControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000557d3
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000055785
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005573a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000556f9
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000000556e7
- (void)updateWithTemplateElement:(id)arg1;	// IMP=0x000000000005505a

@end

