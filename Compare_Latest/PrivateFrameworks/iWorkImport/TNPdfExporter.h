/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TNRenderingExporter.h>

#import "TSKEncryptedDocumentExporter-Protocol.h"

@class NSDictionary;

// Not exported
@interface TNPdfExporter : TNRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

- (void)setOptions:(id)arg1;
- (void)dealloc;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (id)p_renderingExporterDelegate;

@end

