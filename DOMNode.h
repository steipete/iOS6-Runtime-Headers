/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class UITextPosition, UIColor, UIImage, UITextRange, DOMNode, DOMDocument, DOMNamedNodeMap, UITextInteractionAssistant, <UITextInputDelegate>, UIResponder<UITextInput>, UIView, <UITextInputTokenizer>, NSDictionary, UIView<UITextInputPrivate>, DOMNodeList, DOMElement, NSString;

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UIKeyInput, UITextInputTokenizer, UIWebSelectionBlock, UITextInput_Internal> {
}

@property(getter=_proxyTextInput,readonly) UIResponder<UITextInput> * __content;
@property(readonly) UIView<UITextInputPrivate> * _textSelectingContainer;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(retain) UIColor * insertionPointColor;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIColor * selectionHighlightColor;
@property(retain) UIImage * selectionDragDotImage;
@property unsigned int insertionPointWidth;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property BOOL contentsIsSingleValue;
@property BOOL acceptsEmoji;
@property int emptyContentReturnKeyType;
@property BOOL returnKeyGoesToNextResponder;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property BOOL displaySecureTextUsingPlainText;
@property BOOL learnsCorrections;
@property int shortcutConversionType;
@property BOOL suppressReturnKeyStyling;
@property BOOL forceEnableDictation;
@property BOOL useInterfaceLanguageForLocalization;
@property BOOL deferBecomingResponder;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property int selectionGranularity;
@property(readonly) NSString * nodeName;
@property(copy) NSString * nodeValue;
@property(readonly) unsigned short nodeType;
@property(readonly) DOMNode * parentNode;
@property(readonly) DOMNodeList * childNodes;
@property(readonly) DOMNode * firstChild;
@property(readonly) DOMNode * lastChild;
@property(readonly) DOMNode * previousSibling;
@property(readonly) DOMNode * nextSibling;
@property(readonly) DOMNamedNodeMap * attributes;
@property(readonly) DOMDocument * ownerDocument;
@property(readonly) NSString * namespaceURI;
@property(copy) NSString * prefix;
@property(readonly) NSString * localName;
@property(readonly) NSString * baseURI;
@property(copy) NSString * textContent;
@property(readonly) DOMElement * parentElement;
@property(readonly) BOOL isContentEditable;


- (id)localName;
- (id)boundingBoxes;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (BOOL)isDefaultNamespace:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (BOOL)isEqualNode:(id)arg1;
- (BOOL)hasAttributes;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (void)normalize;
- (id)cloneNode:(BOOL)arg1;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (id)baseURI;
- (void)setPrefix:(id)arg1;
- (id)prefix;
- (id)namespaceURI;
- (void)setNodeValue:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (BOOL)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)contains:(id)arg1;
- (id)lookupNamespaceURI:(id)arg1;
- (id)hrefTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefTarget;
- (id)lineBoxQuads;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (id)lineBoxRects;
- (struct Element { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int (**x3)(); struct ContainerNode {} *x4; int x5; unsigned int x6; struct Document {} *x7; struct Node {} *x8; struct Node {} *x9; struct RenderObject {} *x10; struct Node {} *x11; struct Node {} *x12; struct QualifiedName { struct QualifiedNameImpl {} *x_13_1_1; } x13; struct OwnPtr<WebCore::ElementAttributeData> { struct ElementAttributeData {} *x_14_1_1; } x14; }*)_linkElement;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadAndInsideFixedPosition:(BOOL*)arg1;
- (id)textRects;
- (struct RootObject { }*)_rootObject;
- (id)nodeName;
- (id)nodeValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)childNodes;
- (id)lastChild;
- (id)appendChild:(id)arg1;
- (id)removeChild:(id)arg1;
- (BOOL)hasChildNodes;
- (id)parentNode;
- (unsigned short)nodeType;
- (id)ownerDocument;
- (id)nextSibling;
- (id)firstChild;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (float)computedFontSize;
- (id)previousFocusNode;
- (id)nextFocusNode;
- (BOOL)containsOnlyInlineObjects;
- (BOOL)isSelectableBlock;
- (id)parentElement;
- (id)rangeOfContainingParagraph;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)textHeight;
- (id)absoluteQuads;
- (id)hrefURL;
- (id)borderRadii;
- (void)inspect;
- (BOOL)isSameNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (id)hrefLabel;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (id)previousSibling;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxUsingTransforms;
- (BOOL)isContentEditable;
- (id)attributes;
- (id)webArchive;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_renderRect:(bool*)arg1;
- (id)markupString;
- (id)webArchiveByFilteringSubframes:(id)arg1;
- (BOOL)isHorizontalWritingMode;
- (void)showPlaceholderIfNecessary;
- (void)hidePlaceholder;
- (id)_subresourceURLs;
- (id)rangeOfContents;
- (id)endPosition;
- (id)startPosition;
- (id)itemTitle;
- (void)populateCell:(id)arg1;
- (id)createPickerCell;
- (id)createSelectedItem;
- (id)createPeripheral;
- (id)tagName;
- (id)urlScheme;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (BOOL)isTextControl;
- (int)keyboardType;
- (BOOL)isSecure;
- (id)text;
- (void)insertText:(id)arg1;
- (BOOL)isEditable;
- (BOOL)hasSelection;
- (int)selectionState;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)selectedDOMRange;
- (id)content;
- (id)textDocument;
- (BOOL)editable;
- (void)moveDown;
- (void)moveUp;
- (void)moveLeft;
- (void)moveRight;
- (void)setInitialSelectionBehavior:(int)arg1;
- (int)initialSelectionBehavior;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(BOOL)arg3;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 inset:(float)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1 withInset:(float)arg2;
- (id)uiWebDocumentView;
- (id)rangeOfEnclosingWord:(id)arg1;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSecure:(BOOL)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (BOOL)isShowingPlaceholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (BOOL)selectionAtWordStart;
- (BOOL)selectionAtDocumentStart;
- (int)wordOffsetInRange:(id)arg1;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (id)rectsForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithText:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)isAutoFillMode;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (BOOL)contentsIsSingleValue;
- (void)setTextSuggestionDelegate:(id)arg1;
- (id)textSuggestionDelegate;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (id)fontForCaretSelection;
- (void)setMarkedText:(id)arg1;
- (id)markedText;
- (id)wordRangeContainingCaretSelection;
- (id)wordContainingCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (void)moveForward:(unsigned int)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (BOOL)requiresKeyEvents;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (BOOL)becomesEditableWithGestures;
- (void)updateSelection;
- (void)updateAutoscroll:(id)arg1;
- (id)automaticallySelectedOverlay;
- (id)textColorForCaretSelection;
- (id)_textSelectingContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)selectionRectsForRange:(id)arg1;
- (void)setSelectionAffinity:(int)arg1;
- (int)selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (void)setInputDelegate:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (void)setSelectedTextRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)hasText;
- (id)metadataDictionariesForDictationResults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)deleteBackward;
- (id)tokenizer;
- (id)inputDelegate;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInRange:(id)arg1;
- (id)selectedTextRange;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (id)markedTextRange;
- (void)selectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_markedTextNSRange;
- (BOOL)hasContent;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)takeTraitsFrom:(id)arg1;
- (int)textLoupeVisibility;
- (void)setTextLoupeVisibility:(int)arg1;
- (id)textInputTraits;
- (id)selectionView;
- (id)interactionAssistant;
- (int)returnKeyType;
- (void)setReturnKeyType:(int)arg1;
- (BOOL)isEditing;
- (BOOL)editing;
- (void)setText:(id)arg1;
- (id)delegate;
- (id)_realNode;
- (id)tapHighlightColor;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)nodeCanBecomeFirstResponder;
- (BOOL)showsTapHighlight;
- (BOOL)alwaysAttemptToShowTapHighlight;
- (BOOL)touchCalloutEnabled;
- (id)rangeOfContents;
- (id)webFrame;
- (id)enclosingElementIncludingSelf;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(int)arg2;
- (id)asElement;
- (BOOL)containsNode:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (BOOL)rendersAsBlock;
- (id)largerParent;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)isSameBlock:(id)arg1;
- (BOOL)hasCustomLineHeight;
- (id)asDomRange;
- (id)enclosingDocument;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)parentBlock;
- (BOOL)selectable;
- (id)asDomNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fullRange;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectionAsNSRange;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_keyInput;
- (int)_indexForTextPosition:(id)arg1;
- (id)_selectableText;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_textColorForCaretSelection;
- (id)_fontForCaretSelection;
- (int)_selectionAffinity;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (BOOL)_selectionAtDocumentEnd;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (unsigned long)_characterInRelationToRangedSelection:(int)arg1;
- (unsigned long)_characterAfterCaretSelection;
- (BOOL)_selectionAtDocumentStart;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (BOOL)_isEmptySelection;
- (unsigned long)_characterInRelationToCaretSelection:(int)arg1;
- (void)_deleteForwardAndNotify:(BOOL)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)_wordContainingCaretSelection;
- (BOOL)_selectionAtWordStart;
- (unsigned long)_characterBeforeCaretSelection;
- (void)_setGestureRecognizers;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_fullText;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_deleteByWord;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_extendCurrentSelection:(int)arg1;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_unmarkText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (id)_proxyTextInput;
- (id)textInputView;
- (id)_textFormElement;
- (id)_previousAssistedNode;
- (id)_nextAssistedNode;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (BOOL)_requiresInputView;
- (BOOL)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_accessoryClear;

@end
