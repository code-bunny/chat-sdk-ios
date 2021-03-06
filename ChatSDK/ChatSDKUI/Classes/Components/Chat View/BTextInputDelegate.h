//
//  BTextInputDelegate.h
//  Chat SDK
//
//  Created by Benjamin Smiley-andrews on 26/09/2013.
//  Copyright (c) 2013 deluge. All rights reserved.
//

@class RXPromise;

@protocol BTextInputDelegate <NSObject>

-(RXPromise *) sendTextMessage: (NSString *) message;
-(RXPromise *) sendTextMessage: (NSString *) message withMeta: (NSDictionary *)meta;

// Return whether we should mark the button as selected
-(BOOL) showOptions;
// Return whether we should mark the button as deselected
-(BOOL) hideOptions;
-(void) sendAudioMessage: (NSData *) data duration:(double) seconds;
-(void) typing;
-(void) didResizeTextInputViewWithDelta: (float) delta;


@end

