//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDocumentBrowserViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI29DocumentBrowserViewController : UIDocumentBrowserViewController
{
    MISSING_TYPE *documentConfigurations;	// 8 = 0x8
    MISSING_TYPE *rootModifier;	// 16 = 0x10
    MISSING_TYPE *configurationMap;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000068166b
- (id)initForOpeningContentTypes:(id)arg1;	// IMP=0x000000000068161c
- (id)initForOpeningFilesWithContentTypes:(id)arg1;	// IMP=0x00000000006815dd
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000068155d
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000681295
- (void)documentBrowser:(id)arg1 failedToImportDocumentAtURL:(id)arg2 error:(id)arg3;	// IMP=0x0000000000680073
- (void)documentBrowser:(id)arg1 didImportDocumentAtURL:(id)arg2 toDestinationURL:(id)arg3;	// IMP=0x000000000067faae
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x000000000067fa18
- (void)documentBrowser:(id)arg1 didRequestDocumentCreationWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000067f868
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000067eede

@end
