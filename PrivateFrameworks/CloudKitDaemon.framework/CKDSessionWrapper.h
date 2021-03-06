/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSessionWrapper : NSObject {
    NSMutableDictionary * _delegateByTaskDescription;
    bool  _isEphemeral;
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSMutableDictionary *delegateByTaskDescription;
@property (nonatomic, readonly) bool isEphemeral;
@property (nonatomic, readonly) NSURLSession *session;

+ (id)wrapperWithSession:(id)arg1 isEphemeral:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithSession:(id)arg1 isEphemeral:(bool)arg2;
- (void)_recalculateSessionDelegateQueuePriority;
- (void)addDelegate:(id)arg1 forTask:(id)arg2;
- (id)delegateByTaskDescription;
- (id)delegateForTask:(id)arg1;
- (bool)isEphemeral;
- (void)removeDelegateForTask:(id)arg1;
- (id)session;

@end
