/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFPlaceholderMailDeliveryUI : MFOutgoingMessageDelivery

- (id)deliverSynchronously;
- (void)recreateMessageWithHTMLDocument:(id)arg1 plainDocument:(id)arg2 otherDocuments:(id)arg3 charSets:(id)arg4;
- (void)regenerateMessageParts:(id)arg1 htmlBody:(id*)arg2 plainTextAlternative:(id*)arg3 otherHTMLAndAttachments:(id*)arg4 charsets:(id*)arg5;
- (BOOL)updateMessageWithAttachmentsSynchronously;

@end
