//
//  Header.h
//  Toyotaz are cars too
//
//  Created by Mohammad Shahzaib Ather on 2017-07-11.
//  Copyright © 2017 Mohammad Shahzaib Ather. All rights reserved.
//

#ifndef Header_h
#define Header_h


@interface Car : NSObject

@property    NSString *model;

-(void) drive;
-(void) initWithModel : (NSString*) _model ;
@end



@implementation Car
-(void) drive {
    NSLog (@"The car im driving is %@ " , _model);
}
-(void) initWithModel:(NSString *) model{
    
    _model=model;
    
}

@end







#endif /* Header_h */
