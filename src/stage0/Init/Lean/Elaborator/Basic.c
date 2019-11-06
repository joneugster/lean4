// Lean compiler output
// Module: Init.Lean.Elaborator.Basic
// Imports: Init.Control.Reader Init.Lean.MetavarContext Init.Lean.NameGenerator Init.Lean.Scopes Init.Lean.Parser.Module
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_checkSyntaxNodeKind___closed__1;
lean_object* l_Lean_Elab_getOpenDecls(lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2;
lean_object* l_Lean_declareBuiltinCommandElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_addBuiltinCommandElab___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getNamespace___boxed(lean_object*);
lean_object* l_Lean_Elab_rootNamespace___closed__2;
lean_object* l_Lean_Elab_withInPattern___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_toBaseDir(lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
lean_object* l_Lean_attrParamSyntaxToIdentifier(lean_object*);
lean_object* l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ElabScope_Inhabited;
uint8_t lean_name_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_runIO___rarg(lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* lean_io_realpath(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___boxed(lean_object*);
lean_object* l_Lean_Elab_inPattern(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabCommandAtFrontend___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_object* l_Lean_mkCommandElabAttribute___closed__1;
lean_object* l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6___boxed(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyGetScope(lean_object*);
lean_object* l_Lean_Elab_Inhabited___boxed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runIOUnsafe(lean_object*);
lean_object* l_Lean_Elab_runIOUnsafe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logErrorUsingCmdPos(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyGetScope___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkTermElabAttribute___closed__1;
lean_object* l_Lean_Elab_resolveNamespace___closed__1;
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logErrorAndThrow(lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1(lean_object*);
lean_object* l_Lean_Elab_logErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__5;
lean_object* l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkElabAttribute___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabCommand___closed__3;
lean_object* l_Lean_Elab_mkForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinTermElab___closed__2;
uint8_t l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4(lean_object*, lean_object*);
extern lean_object* l_Lean_EnvExtension_Inhabited___rarg___closed__1;
extern lean_object* l_PersistentHashMap_HasEmptyc___closed__1;
size_t l_USize_shift__right(size_t, size_t);
extern lean_object* l_Lean_AttributeImpl_inhabited___closed__5;
lean_object* l_Lean_mkElabAttribute___at_Lean_mkCommandElabAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_anonymousInstNamePrefix___closed__1;
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runIO(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
uint8_t l_Lean_Parser_isExitCommand(lean_object*);
lean_object* l_Lean_mkElabAttribute___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_processCommandsAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1;
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2(lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_object* l_List_toString___at_Lean_Environment_displayStats___spec__1(lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinTermElab___closed__2;
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1;
lean_object* l_Lean_Elab_mkLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__7;
extern lean_object* l_Lean_Parser_Command_docComment___elambda__1___closed__2;
extern lean_object* l_Lean_findOLean___closed__1;
extern lean_object* l_Lean_LocalContext_Inhabited___closed__1;
lean_object* l_Lean_termElabAttribute___closed__3;
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__4;
lean_object* l_Lean_registerAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logUnknownDecl___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___at_Lean_Elab_getScope___spec__1___boxed(lean_object*);
lean_object* l_Lean_Elab_Inhabited(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getElabContext___boxed(lean_object*, lean_object*);
lean_object* l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logError___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_import_modules(lean_object*, uint32_t, lean_object*);
lean_object* lean_absolutize_module_name(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Environment_5__envExtensionsRef;
lean_object* l_Lean_Elab_logError(lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_Elab_withInPattern(lean_object*);
lean_object* l_Lean_Elab_processCommandsAux___main(lean_object*);
uint8_t l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinTermElab___closed__1;
lean_object* l_Lean_mkTermElabAttribute___closed__2;
lean_object* l_Lean_mkElabAttribute___at_Lean_mkTermElabAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinCommandElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_namespaces(lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Lean_Elab_withNewScope(lean_object*);
lean_object* l_HashMapImp_insert___at_Lean_addBuiltinCommandElab___spec__11(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_asNode___rarg(lean_object*);
lean_object* l_Lean_Elab_removeRoot(lean_object*);
lean_object* l_Lean_Elab_elabCommand___closed__1;
lean_object* l_Lean_Elab_logElabException___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Lean_addRel___main(lean_object*, lean_object*);
extern lean_object* l_Lean_mkInitAttr___lambda__1___closed__1;
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_testFrontend___closed__4;
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__2;
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___main(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1___boxed(lean_object*, lean_object*);
uint8_t l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_syntaxNodeKindOfAttrParam___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1___boxed(lean_object*, lean_object*);
lean_object* lean_io_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_updateCmdPos___boxed(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Elab_anonymousInstNamePrefix;
lean_object* l_Lean_addBuiltinCommandElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkLambda(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_depArrow___elambda__1___closed__4;
lean_object* l_IO_ofExcept___at_Lean_Parser_declareBuiltinParser___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_OpenDecl_Inhabited___closed__1;
lean_object* l_Lean_Elab_setEnv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_initializing(lean_object*);
lean_object* l_Lean_Elab_getEnv___boxed(lean_object*);
lean_object* l_Lean_Elab_getScope(lean_object*);
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4___boxed(lean_object*, lean_object*);
lean_object* lean_expr_mk_fvar(lean_object*);
lean_object* lean_local_ctx_mk_local_decl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_List_get_x21___main___rarg___closed__1;
lean_object* lean_mk_empty_environment(uint32_t, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_termElabAttribute;
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinCommandElab___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_AttributeImpl_inhabited___closed__4;
lean_object* l_Lean_Elab_logErrorUsingCmdPos___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1;
lean_object* l_Lean_Elab_resolveNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4;
lean_object* l_Lean_OpenDecl_HasToString(lean_object*);
extern lean_object* l_Lean_initAttr;
lean_object* l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_declareBuiltinParser___closed__5;
lean_object* l_Lean_Elab_setEnv(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_mkCommandElabAttribute___closed__2;
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___main___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2;
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinTermElab___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getNamespace___rarg(lean_object*);
lean_object* l_Lean_Elab_runIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_commandElabAttribute;
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1(lean_object*);
lean_object* l_Lean_Elab_mkMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkBuiltinCommandElabTable(lean_object*);
lean_object* l_Lean_Elab_updateCmdPos(lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__3;
lean_object* lean_expr_mk_const(lean_object*, lean_object*);
extern lean_object* l_Lean_NameGenerator_Inhabited___closed__3;
lean_object* l_Lean_Elab_getNamespace(lean_object*);
lean_object* l_Lean_Elab_logErrorAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_name_hash_usize(lean_object*);
lean_object* l_Lean_Elab_mkLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___rarg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr(lean_object*);
lean_object* l_Lean_Elab_localContext___rarg(lean_object*);
uint8_t l_Lean_Syntax_isNone___rarg(lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__6;
lean_object* l_Lean_Elab_mkLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_addBuiltinCommandElab___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg___rarg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkFreshName(lean_object*);
lean_object* l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinElab___closed__3;
size_t l_USize_add(size_t, size_t);
uint8_t l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinCommandElab___closed__1;
lean_object* l_Lean_checkSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logErrorAndThrow___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_runElab___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at_Lean_addBuiltinTermElab___spec__13(lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at_Lean_addBuiltinTermElab___spec__15(lean_object*, lean_object*);
lean_object* lean_module_name_of_file(lean_object*, lean_object*);
extern lean_object* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
lean_object* l_Lean_Syntax_getArgs___rarg(lean_object*);
lean_object* l_Lean_Elab_processHeaderAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logUnknownDecl___rarg___closed__1;
lean_object* l_Lean_Elab_processHeaderAux___closed__3;
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___main___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_findMAux___main___at_Lean_findFile___spec__2___closed__1;
extern lean_object* l_Char_HasRepr___closed__1;
extern lean_object* l_Lean_Parser_mkTermParserAttribute___closed__4;
lean_object* l_Lean_addBuiltinTermElab___closed__1;
lean_object* l_Lean_Syntax_getId___rarg(lean_object*);
lean_object* l_Lean_OpenDecl_HasToString___closed__1;
lean_object* l_Lean_addBuiltinTermElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_System_FilePath_dirName(lean_object*);
lean_object* l_Lean_Name_appendIndexAfter(lean_object*, lean_object*);
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1;
lean_object* l_Lean_Elab_getUniverses___rarg(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessage(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_nameToExprAux___main(lean_object*);
lean_object* l_Lean_ElabAttribute_Inhabited(lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__6;
lean_object* l_Lean_Elab_getUniverses(lean_object*);
uint8_t l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2;
lean_object* l_Lean_Elab_runElab___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_addAndCompile(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Environment_8__persistentEnvExtensionsRef;
lean_object* l_Lean_Elab_localContext(lean_object*);
uint8_t l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(lean_object*, lean_object*);
lean_object* l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logUnknownDecl(lean_object*);
lean_object* l_Lean_ElabException_Inhabited;
extern lean_object* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_object* l_Lean_Elab_getPos(lean_object*);
extern lean_object* l_Lean_AttributeImpl_inhabited___closed__1;
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_processHeader(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2;
lean_object* l_mkHashMap___at_Lean_mkBuiltinCommandElabTable___spec__2(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_rootNamespace;
lean_object* l_Lean_Elab_processCommandsAux___boxed(lean_object*);
lean_object* l_Lean_declareBuiltinCommandElab___closed__2;
extern lean_object* l_List_head_x21___rarg___closed__1;
uint8_t l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___at_Lean_Elab_getScope___spec__1(lean_object*);
lean_object* l_Lean_Elab_modifyScope(lean_object*, lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__1;
lean_object* l_Lean_Elab_localContext___boxed(lean_object*);
lean_object* l_Lean_mkBuiltinTermElabTable(lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__5;
lean_object* l_Lean_Elab_runElab(lean_object*);
lean_object* l_Lean_termElabAttribute___closed__2;
lean_object* l_Lean_modNameToFileName___main(lean_object*);
lean_object* l_Lean_SMap_insert___at_Lean_addBuiltinTermElab___spec__7(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_syntaxNodeKindOfAttrParam(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_resolveNamespace___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ElabException_Inhabited___closed__1;
lean_object* l_mkHashMap___at_Lean_mkBuiltinTermElabTable___spec__2(lean_object*);
lean_object* l_panicWithPos___at_Lean_Elab_getScope___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
extern size_t l_PersistentHashMap_insertAux___main___rarg___closed__2;
extern lean_object* l_Lean_Parser_mkCommandParserAttribute___closed__4;
lean_object* l_Lean_Elab_elabCommand___closed__2;
lean_object* l_Lean_Elab_getOpenDecls___boxed(lean_object*);
lean_object* lean_io_mk_ref(lean_object*, lean_object*);
lean_object* l_panicWithPos___at_Lean_Elab_getScope___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logUnknownDecl___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isNamespace(lean_object*, lean_object*);
lean_object* l_Lean_mkCApp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logElabException___closed__1;
lean_object* l_Lean_Elab_testFrontend___closed__1;
lean_object* l_Lean_Parser_parseCommand___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__2(lean_object*, lean_object*);
uint8_t l_Lean_Parser_isEOI(lean_object*);
lean_object* l_Lean_mkElabAttribute(lean_object*);
lean_object* l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5;
lean_object* l_Lean_Elab_modifyGetScope___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCommandElabAttribute(lean_object*);
lean_object* l_Lean_syntaxNodeKindOfAttrParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getUniverses___boxed(lean_object*);
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_processCommandsAux___main___boxed(lean_object*);
uint8_t l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_OpenDecl_Inhabited;
lean_object* l_Lean_mkElabAttribute___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5;
lean_object* l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__4;
lean_object* l_Lean_declareBuiltinElab___closed__2;
lean_object* l_Lean_Name_replacePrefix___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ElabException_Inhabited___closed__2;
extern lean_object* l_System_FilePath_dirName___closed__1;
lean_object* l_panic(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserContextCore(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_ref_get(lean_object*, lean_object*);
lean_object* l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2;
lean_object* l_Lean_Elab_runIOUnsafe___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_testFrontend___closed__3;
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Lean_ParametricAttribute_setParam___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getElabContext(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__2;
extern lean_object* l_Lean_AttributeImpl_inhabited___closed__6;
lean_object* l_Lean_addBuiltinCommandElab___closed__1;
lean_object* l_Lean_Elab_logError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabCommandAtFrontend(lean_object*, lean_object*, lean_object*);
extern lean_object* l_HashMap_Inhabited___closed__1;
lean_object* l_Lean_Elab_getOpenDecls___rarg(lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3;
uint8_t l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1(lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_addBuiltinTermElab___spec__14(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getEnv___rarg(lean_object*);
extern lean_object* l_PersistentHashMap_insertAux___main___rarg___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__3;
uint8_t l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_testFrontend(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getPosition___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinTermElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getPos___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_AssocList_foldlM___main___at_Lean_addBuiltinCommandElab___spec__14(lean_object*, lean_object*);
lean_object* l_Lean_str2ElabException(lean_object*);
lean_object* l_mkHashMapImp___rarg(lean_object*);
lean_object* l_HashMapImp_insert___at_Lean_addBuiltinTermElab___spec__12(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkFreshName___boxed(lean_object*);
uint8_t l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__1;
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1;
lean_object* l_Lean_Elab_updateCmdPos___rarg(lean_object*);
lean_object* l_Lean_Elab_absolutizeModuleName___closed__1;
lean_object* l_Lean_syntaxNodeKindOfAttrParam___closed__2;
lean_object* l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1;
lean_object* l_Lean_mkElabAttribute___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_processCommandsAux___main___rarg(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinTermElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_HashMapImp_moveEntries___main___at_Lean_addBuiltinCommandElab___spec__13(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_builtinCommandElabTable;
lean_object* l_EStateM_bind___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkAnonymousInstName___boxed(lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Path_1__pathSep___closed__1;
lean_object* l_Lean_Elab_getPosition(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
extern lean_object* l_Lean_nameToExprAux___main___closed__4;
extern lean_object* l_Lean_MetavarContext_Inhabited___closed__1;
lean_object* l_Lean_Elab_logMessage___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_HashMapImp_expand___at_Lean_addBuiltinCommandElab___spec__12(lean_object*, lean_object*);
lean_object* l_Lean_ElabAttribute_Inhabited___rarg(lean_object*);
lean_object* l_Lean_Elab_getScope___boxed(lean_object*);
lean_object* l_Lean_Syntax_getPos___rarg(lean_object*);
lean_object* l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5(lean_object*, lean_object*);
lean_object* l_Lean_ElabScope_Inhabited___closed__1;
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l_Lean_mkElabAttribute___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_panicWithPos___rarg___closed__2;
lean_object* l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5___boxed(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltinElab___closed__1;
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__7;
lean_object* l_Lean_termElabAttribute___closed__1;
lean_object* l_Lean_Elab_mkAnonymousInstName(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getScope___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logElabException(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4;
lean_object* l_Lean_Elab_getPos___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkElabAttribute___rarg___lambda__2___closed__1;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_anonymousInstNamePrefix___closed__2;
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___closed__3;
lean_object* l_Lean_registerBuiltinCommandElabAttr(lean_object*);
lean_object* l_Lean_registerBuiltinCommandElabAttr___closed__1;
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5(lean_object*, size_t, lean_object*);
lean_object* l_Lean_declareBuiltinElab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_Lean_Elab_logErrorAndThrow___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Inhabited___rarg(lean_object*);
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs___rarg(lean_object*);
lean_object* l_Lean_Elab_testFrontend___closed__2;
lean_object* l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_Elab_mkForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_modifyScope___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_processHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logMessage(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkInitAttr___closed__2;
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_processCommands(lean_object*, lean_object*);
lean_object* l_Lean_Elab_processHeaderAux(lean_object*, lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Elab_processHeaderAux___closed__2;
lean_object* l_Lean_mkElabAttribute___rarg___closed__1;
lean_object* l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_processCommandsAux(lean_object*);
lean_object* l_Lean_mkTermElabAttribute(lean_object*);
lean_object* l_Lean_Elab_inPattern___rarg(lean_object*);
lean_object* l_Lean_Elab_withNewScope___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getEnv(lean_object*);
lean_object* lean_io_ref_reset(lean_object*, lean_object*);
lean_object* l_Lean_Elab_rootNamespace___closed__1;
lean_object* l_Lean_Elab_mkFreshName___rarg(lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_processHeaderAux___closed__1;
extern lean_object* l_Lean_Parser_declareBuiltinParser___closed__6;
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insert___at_Lean_addBuiltinTermElab___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_builtinTermElabTable;
lean_object* l_Lean_Parser_isValidSyntaxNodeKind(lean_object*, lean_object*);
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_inPattern___boxed(lean_object*);
lean_object* l_Lean_Elab_processCommand(lean_object*, lean_object*);
extern lean_object* l_String_splitAux___main___closed__1;
lean_object* l_Lean_Parser_parseHeader(lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__4(lean_object*, lean_object*);
lean_object* _init_l_Lean_OpenDecl_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_OpenDecl_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_OpenDecl_Inhabited___closed__1;
return x_1;
}
}
uint8_t l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_name_dec_eq(x_6, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1(x_7, x_9);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
else
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
}
}
}
}
}
lean_object* _init_l_Lean_OpenDecl_HasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" hiding ");
return x_1;
}
}
lean_object* l_Lean_OpenDecl_HasToString(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_System_FilePath_dirName___closed__1;
x_5 = l_Lean_Name_toStringWithSep___main(x_4, x_2);
x_6 = lean_box(0);
x_7 = l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_List_toString___at_Lean_Environment_displayStats___spec__1(x_3);
x_9 = l_Lean_OpenDecl_HasToString___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_string_append(x_5, x_10);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_12 = l_String_splitAux___main___closed__1;
x_13 = lean_string_append(x_5, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = l_System_FilePath_dirName___closed__1;
x_17 = l_Lean_Name_toStringWithSep___main(x_16, x_14);
x_18 = l_Lean_Parser_Term_depArrow___elambda__1___closed__4;
x_19 = lean_string_append(x_17, x_18);
x_20 = l_Lean_Name_toStringWithSep___main(x_16, x_15);
x_21 = lean_string_append(x_19, x_20);
lean_dec(x_20);
return x_21;
}
}
}
lean_object* l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_hasDecEq___main___at_Lean_OpenDecl_HasToString___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* _init_l_Lean_ElabScope_Inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = l_String_splitAux___main___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_Options_empty;
x_5 = l_Lean_LocalContext_Inhabited___closed__1;
x_6 = lean_unsigned_to_nat(1u);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_3);
lean_ctor_set(x_8, 4, x_1);
lean_ctor_set(x_8, 5, x_1);
lean_ctor_set(x_8, 6, x_5);
lean_ctor_set(x_8, 7, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*8, x_7);
return x_8;
}
}
lean_object* _init_l_Lean_ElabScope_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_ElabScope_Inhabited___closed__1;
return x_1;
}
}
lean_object* _init_l_Lean_ElabException_Inhabited___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("error");
return x_1;
}
}
lean_object* _init_l_Lean_ElabException_Inhabited___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_ElabException_Inhabited___closed__1;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_ElabException_Inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_ElabException_Inhabited___closed__2;
return x_1;
}
}
lean_object* l_Lean_str2ElabException(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_mkHashMap___at_Lean_mkBuiltinTermElabTable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1;
x_3 = l_PersistentHashMap_HasEmptyc___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2;
return x_1;
}
}
lean_object* l_Lean_mkBuiltinTermElabTable(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1;
x_3 = lean_io_mk_ref(x_2, x_1);
return x_3;
}
}
lean_object* l_mkHashMap___at_Lean_mkBuiltinCommandElabTable___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1;
x_3 = l_PersistentHashMap_HasEmptyc___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2;
return x_1;
}
}
lean_object* l_Lean_mkBuiltinCommandElabTable(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1;
x_3 = lean_io_mk_ref(x_2, x_1);
return x_3;
}
}
uint8_t l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_name_hash_usize(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = lean_name_dec_eq(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_2 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_2);
x_12 = 1;
return x_12;
}
}
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5(x_3, x_4, x_2);
return x_5;
}
}
uint8_t l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2(x_4, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4(x_5, x_2);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2(x_9, x_2);
return x_10;
}
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinTermElab___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinTermElab___spec__10(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_addBuiltinTermElab___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_AssocList_foldlM___main___at_Lean_addBuiltinTermElab___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_name_hash_usize(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_name_hash_usize(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_addBuiltinTermElab___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at_Lean_addBuiltinTermElab___spec__15(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_addBuiltinTermElab___spec__13(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_addBuiltinTermElab___spec__14(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_dec_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_dec_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_addBuiltinTermElab___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_name_hash_usize(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_addBuiltinTermElab___spec__13(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_name_hash_usize(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_addBuiltinTermElab___spec__13(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_addBuiltinTermElab___spec__16(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_SMap_insert___at_Lean_addBuiltinTermElab___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_PersistentHashMap_insert___at_Lean_addBuiltinTermElab___spec__8(x_6, x_2, x_3);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_PersistentHashMap_insert___at_Lean_addBuiltinTermElab___spec__8(x_9, x_2, x_3);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_4);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_HashMapImp_insert___at_Lean_addBuiltinTermElab___spec__12(x_13, x_2, x_3);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_17 = l_HashMapImp_insert___at_Lean_addBuiltinTermElab___spec__12(x_15, x_2, x_3);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_4);
return x_18;
}
}
}
}
lean_object* _init_l_Lean_addBuiltinTermElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid builtin term elaborator, elaborator for '");
return x_1;
}
}
lean_object* _init_l_Lean_addBuiltinTermElab___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has already been defined");
return x_1;
}
}
lean_object* l_Lean_addBuiltinTermElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_builtinTermElabTable;
x_6 = lean_io_ref_get(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1(x_8, x_1);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_6);
x_11 = lean_io_ref_get(x_5, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_io_ref_reset(x_5, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_SMap_insert___at_Lean_addBuiltinTermElab___spec__7(x_12, x_1, x_3);
x_17 = lean_io_ref_set(x_5, x_16, x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_3);
x_26 = l_System_FilePath_dirName___closed__1;
x_27 = l_Lean_Name_toStringWithSep___main(x_26, x_1);
x_28 = l_Lean_addBuiltinTermElab___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_Lean_addBuiltinTermElab___closed__2;
x_31 = lean_string_append(x_29, x_30);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_31);
return x_6;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_6, 0);
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_6);
x_34 = l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1(x_32, x_1);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_io_ref_get(x_5, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_io_ref_reset(x_5, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_SMap_insert___at_Lean_addBuiltinTermElab___spec__7(x_36, x_1, x_3);
x_41 = lean_io_ref_set(x_5, x_40, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_44 = x_38;
} else {
 lean_dec_ref(x_38);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_3);
lean_dec(x_1);
x_46 = lean_ctor_get(x_35, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_48 = x_35;
} else {
 lean_dec_ref(x_35);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_3);
x_50 = l_System_FilePath_dirName___closed__1;
x_51 = l_Lean_Name_toStringWithSep___main(x_50, x_1);
x_52 = l_Lean_addBuiltinTermElab___closed__1;
x_53 = lean_string_append(x_52, x_51);
lean_dec(x_51);
x_54 = l_Lean_addBuiltinTermElab___closed__2;
x_55 = lean_string_append(x_53, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_33);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_3);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_6);
if (x_57 == 0)
{
return x_6;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_6, 0);
x_59 = lean_ctor_get(x_6, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_6);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_addBuiltinTermElab___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_HashMapImp_contains___at_Lean_addBuiltinTermElab___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinTermElab___spec__5(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_addBuiltinTermElab___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_SMap_contains___at_Lean_addBuiltinTermElab___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_addBuiltinTermElab___spec__11(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinTermElab___spec__9(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_addBuiltinTermElab___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_addBuiltinTermElab(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
uint8_t l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_dec_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
uint8_t l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_name_hash_usize(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
uint8_t l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
return x_12;
}
case 1:
{
lean_object* x_13; size_t x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = x_2 >> x_5;
x_15 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5(x_13, x_14, x_3);
lean_dec(x_13);
return x_15;
}
default: 
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_PersistentHashMap_containsAtAux___main___at_Lean_addBuiltinTermElab___spec__6(x_17, x_18, x_3);
return x_19;
}
}
}
uint8_t l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5(x_3, x_4, x_2);
return x_5;
}
}
uint8_t l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2(x_4, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4(x_5, x_2);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2(x_9, x_2);
return x_10;
}
}
}
lean_object* l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinCommandElab___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_dec_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_array_fget(x_4, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = lean_name_hash_usize(x_9);
x_12 = 1;
x_13 = x_1 - x_12;
x_14 = 5;
x_15 = x_14 * x_13;
x_16 = x_11 >> x_15;
x_17 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_6, x_16, x_1, x_9, x_10);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_5 = x_19;
x_6 = x_17;
goto _start;
}
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_11 = x_2 & x_10;
x_12 = lean_usize_to_nat(x_11);
x_13 = lean_array_get_size(x_7);
x_14 = lean_nat_dec_lt(x_12, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_12);
x_16 = lean_box(2);
x_17 = lean_array_fset(x_7, x_12, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
x_21 = lean_name_dec_eq(x_4, x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_free_object(x_15);
x_22 = l_PersistentHashMap_mkCollisionNode___rarg(x_19, x_20, x_4, x_5);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_array_fset(x_17, x_12, x_23);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_24);
return x_1;
}
else
{
lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_19);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_25 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_28 = lean_name_dec_eq(x_4, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = l_PersistentHashMap_mkCollisionNode___rarg(x_26, x_27, x_4, x_5);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_array_fset(x_17, x_12, x_30);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_31);
return x_1;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_5);
x_33 = lean_array_fset(x_17, x_12, x_32);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_33);
return x_1;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = x_2 >> x_9;
x_37 = x_3 + x_8;
x_38 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_39 = lean_array_fset(x_17, x_12, x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_39);
return x_1;
}
else
{
lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_inc(x_40);
lean_dec(x_15);
x_41 = x_2 >> x_9;
x_42 = x_3 + x_8;
x_43 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_40, x_41, x_42, x_4, x_5);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_array_fset(x_17, x_12, x_44);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_45);
return x_1;
}
}
default: 
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_5);
x_47 = lean_array_fset(x_17, x_12, x_46);
lean_dec(x_12);
lean_ctor_set(x_1, 0, x_47);
return x_1;
}
}
}
}
else
{
lean_object* x_48; size_t x_49; size_t x_50; size_t x_51; size_t x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_dec(x_1);
x_49 = 1;
x_50 = 5;
x_51 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_52 = x_2 & x_51;
x_53 = lean_usize_to_nat(x_52);
x_54 = lean_array_get_size(x_48);
x_55 = lean_nat_dec_lt(x_53, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_fget(x_48, x_53);
x_58 = lean_box(2);
x_59 = lean_array_fset(x_48, x_53, x_58);
switch (lean_obj_tag(x_57)) {
case 0:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_57, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_57, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 lean_ctor_release(x_57, 1);
 x_62 = x_57;
} else {
 lean_dec_ref(x_57);
 x_62 = lean_box(0);
}
x_63 = lean_name_dec_eq(x_4, x_60);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_62);
x_64 = l_PersistentHashMap_mkCollisionNode___rarg(x_60, x_61, x_4, x_5);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_array_fset(x_59, x_53, x_65);
lean_dec(x_53);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
if (lean_is_scalar(x_62)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_62;
}
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_array_fset(x_59, x_53, x_68);
lean_dec(x_53);
x_70 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_70, 0, x_69);
return x_70;
}
}
case 1:
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_57, 0);
lean_inc(x_71);
if (lean_is_exclusive(x_57)) {
 lean_ctor_release(x_57, 0);
 x_72 = x_57;
} else {
 lean_dec_ref(x_57);
 x_72 = lean_box(0);
}
x_73 = x_2 >> x_50;
x_74 = x_3 + x_49;
x_75 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_71, x_73, x_74, x_4, x_5);
if (lean_is_scalar(x_72)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_72;
}
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_array_fset(x_59, x_53, x_76);
lean_dec(x_53);
x_78 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_4);
lean_ctor_set(x_79, 1, x_5);
x_80 = lean_array_fset(x_59, x_53, x_79);
lean_dec(x_53);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; size_t x_84; uint8_t x_85; 
x_82 = lean_unsigned_to_nat(0u);
x_83 = l_PersistentHashMap_insertAtCollisionNodeAux___main___at_Lean_addBuiltinCommandElab___spec__9(x_1, x_82, x_4, x_5);
x_84 = 7;
x_85 = x_84 <= x_3;
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_PersistentHashMap_getCollisionNodeSize___rarg(x_83);
x_87 = lean_unsigned_to_nat(4u);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_86);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_89 = lean_ctor_get(x_83, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_83, 1);
lean_inc(x_90);
lean_dec(x_83);
x_91 = l_PersistentHashMap_insertAux___main___rarg___closed__3;
x_92 = l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10(x_3, x_89, x_90, x_89, x_82, x_91);
lean_dec(x_90);
lean_dec(x_89);
return x_92;
}
else
{
return x_83;
}
}
else
{
return x_83;
}
}
}
}
lean_object* l_PersistentHashMap_insert___at_Lean_addBuiltinCommandElab___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_name_hash_usize(x_2);
x_8 = 1;
x_9 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_5, x_7, x_8, x_2, x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_6, x_10);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_name_hash_usize(x_2);
x_15 = 1;
x_16 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_12, x_14, x_15, x_2, x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_13, x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_AssocList_foldlM___main___at_Lean_addBuiltinCommandElab___spec__14(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = lean_name_hash_usize(x_4);
x_8 = lean_usize_modn(x_7, x_6);
lean_dec(x_6);
x_9 = lean_array_uget(x_1, x_8);
lean_ctor_set(x_2, 2, x_9);
x_10 = lean_array_uset(x_1, x_8, x_2);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_2);
x_15 = lean_array_get_size(x_1);
x_16 = lean_name_hash_usize(x_12);
x_17 = lean_usize_modn(x_16, x_15);
lean_dec(x_15);
x_18 = lean_array_uget(x_1, x_17);
x_19 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_13);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_array_uset(x_1, x_17, x_19);
x_1 = x_20;
x_2 = x_14;
goto _start;
}
}
}
}
lean_object* l_HashMapImp_moveEntries___main___at_Lean_addBuiltinCommandElab___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_AssocList_foldlM___main___at_Lean_addBuiltinCommandElab___spec__14(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_HashMapImp_expand___at_Lean_addBuiltinCommandElab___spec__12(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_addBuiltinCommandElab___spec__13(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_name_dec_eq(x_5, x_1);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(x_1, x_2, x_7);
lean_ctor_set(x_3, 2, x_9);
return x_3;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_13 = lean_name_dec_eq(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(x_1, x_2, x_12);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_2);
lean_ctor_set(x_16, 2, x_12);
return x_16;
}
}
}
}
}
lean_object* l_HashMapImp_insert___at_Lean_addBuiltinCommandElab___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_name_hash_usize(x_2);
x_9 = lean_usize_modn(x_8, x_7);
x_10 = lean_array_uget(x_6, x_9);
x_11 = l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_3);
lean_ctor_set(x_14, 2, x_10);
x_15 = lean_array_uset(x_6, x_9, x_14);
x_16 = lean_nat_dec_le(x_13, x_7);
lean_dec(x_7);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_1);
x_17 = l_HashMapImp_expand___at_Lean_addBuiltinCommandElab___spec__12(x_13, x_15);
return x_17;
}
else
{
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(x_2, x_3, x_10);
x_19 = lean_array_uset(x_6, x_9, x_18);
lean_ctor_set(x_1, 1, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; uint8_t x_26; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_array_get_size(x_21);
x_23 = lean_name_hash_usize(x_2);
x_24 = lean_usize_modn(x_23, x_22);
x_25 = lean_array_uget(x_21, x_24);
x_26 = l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(x_2, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_20, x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_3);
lean_ctor_set(x_29, 2, x_25);
x_30 = lean_array_uset(x_21, x_24, x_29);
x_31 = lean_nat_dec_le(x_28, x_22);
lean_dec(x_22);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = l_HashMapImp_expand___at_Lean_addBuiltinCommandElab___spec__12(x_28, x_30);
return x_32;
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_22);
x_34 = l_AssocList_replace___main___at_Lean_addBuiltinCommandElab___spec__15(x_2, x_3, x_25);
x_35 = lean_array_uset(x_21, x_24, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_SMap_insert___at_Lean_addBuiltinCommandElab___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_PersistentHashMap_insert___at_Lean_addBuiltinCommandElab___spec__7(x_6, x_2, x_3);
lean_ctor_set(x_1, 1, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_PersistentHashMap_insert___at_Lean_addBuiltinCommandElab___spec__7(x_9, x_2, x_3);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_4);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_HashMapImp_insert___at_Lean_addBuiltinCommandElab___spec__11(x_13, x_2, x_3);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_17 = l_HashMapImp_insert___at_Lean_addBuiltinCommandElab___spec__11(x_15, x_2, x_3);
x_18 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_4);
return x_18;
}
}
}
}
lean_object* _init_l_Lean_addBuiltinCommandElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid builtin command elaborator, elaborator for '");
return x_1;
}
}
lean_object* l_Lean_addBuiltinCommandElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_builtinCommandElabTable;
x_6 = lean_io_ref_get(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1(x_8, x_1);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_6);
x_11 = lean_io_ref_get(x_5, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_io_ref_reset(x_5, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_SMap_insert___at_Lean_addBuiltinCommandElab___spec__6(x_12, x_1, x_3);
x_17 = lean_io_ref_set(x_5, x_16, x_15);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_3);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_11);
if (x_22 == 0)
{
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_3);
x_26 = l_System_FilePath_dirName___closed__1;
x_27 = l_Lean_Name_toStringWithSep___main(x_26, x_1);
x_28 = l_Lean_addBuiltinCommandElab___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = l_Lean_addBuiltinTermElab___closed__2;
x_31 = lean_string_append(x_29, x_30);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_31);
return x_6;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_6, 0);
x_33 = lean_ctor_get(x_6, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_6);
x_34 = l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1(x_32, x_1);
lean_dec(x_32);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_io_ref_get(x_5, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_io_ref_reset(x_5, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_SMap_insert___at_Lean_addBuiltinCommandElab___spec__6(x_36, x_1, x_3);
x_41 = lean_io_ref_set(x_5, x_40, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_dec(x_3);
lean_dec(x_1);
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_44 = x_38;
} else {
 lean_dec_ref(x_38);
 x_44 = lean_box(0);
}
if (lean_is_scalar(x_44)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_44;
}
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_3);
lean_dec(x_1);
x_46 = lean_ctor_get(x_35, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_35, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_48 = x_35;
} else {
 lean_dec_ref(x_35);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_3);
x_50 = l_System_FilePath_dirName___closed__1;
x_51 = l_Lean_Name_toStringWithSep___main(x_50, x_1);
x_52 = l_Lean_addBuiltinCommandElab___closed__1;
x_53 = lean_string_append(x_52, x_51);
lean_dec(x_51);
x_54 = l_Lean_addBuiltinTermElab___closed__2;
x_55 = lean_string_append(x_53, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_33);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_3);
lean_dec(x_1);
x_57 = !lean_is_exclusive(x_6);
if (x_57 == 0)
{
return x_6;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_6, 0);
x_59 = lean_ctor_get(x_6, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_6);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
lean_object* l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_AssocList_contains___main___at_Lean_addBuiltinCommandElab___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_HashMapImp_contains___at_Lean_addBuiltinCommandElab___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_containsAux___main___at_Lean_addBuiltinCommandElab___spec__5(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_PersistentHashMap_contains___at_Lean_addBuiltinCommandElab___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_SMap_contains___at_Lean_addBuiltinCommandElab___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Array_iterateMAux___main___at_Lean_addBuiltinCommandElab___spec__10(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_PersistentHashMap_insertAux___main___at_Lean_addBuiltinCommandElab___spec__8(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_addBuiltinCommandElab___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_addBuiltinCommandElab(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* _init_l_Lean_checkSyntaxNodeKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed");
return x_1;
}
}
lean_object* l_Lean_checkSyntaxNodeKind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Parser_isValidSyntaxNodeKind(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_checkSyntaxNodeKind___closed__1;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_checkSyntaxNodeKind___closed__1;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 0);
lean_dec(x_13);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_3);
if (x_16 == 0)
{
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 0);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_3);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_1);
x_4 = l_Lean_checkSyntaxNodeKind___closed__1;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_8 = l_Lean_Name_append___main(x_6, x_1);
x_9 = l_Lean_checkSyntaxNodeKind(x_8, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_2 = x_7;
x_3 = x_10;
goto _start;
}
}
}
}
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_checkSyntaxNodeKindAtNamespaces___main(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_checkSyntaxNodeKindAtNamespaces___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_checkSyntaxNodeKindAtNamespaces___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_checkSyntaxNodeKindAtNamespaces(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* _init_l_Lean_syntaxNodeKindOfAttrParam___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("syntax node kind is missing");
return x_1;
}
}
lean_object* _init_l_Lean_syntaxNodeKindOfAttrParam___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid syntax node kind '");
return x_1;
}
}
lean_object* l_Lean_syntaxNodeKindOfAttrParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_attrParamSyntaxToIdentifier(x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_1);
x_6 = l_Lean_syntaxNodeKindOfAttrParam___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_get_namespaces(x_1);
lean_inc(x_8);
x_10 = l_Lean_Name_append___main(x_2, x_8);
x_11 = l_System_FilePath_dirName___closed__1;
lean_inc(x_8);
x_12 = l_Lean_Name_toStringWithSep___main(x_11, x_8);
x_13 = l_Lean_syntaxNodeKindOfAttrParam___closed__2;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Char_HasRepr___closed__1;
x_16 = lean_string_append(x_14, x_15);
lean_inc(x_8);
x_17 = l_Lean_checkSyntaxNodeKind(x_8, x_4);
if (lean_obj_tag(x_17) == 0)
{
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_checkSyntaxNodeKindAtNamespaces___main(x_8, x_9, x_18);
lean_dec(x_9);
if (lean_obj_tag(x_19) == 0)
{
lean_dec(x_16);
lean_dec(x_10);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_checkSyntaxNodeKind(x_10, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_dec(x_16);
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_16);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
}
lean_object* l_Lean_syntaxNodeKindOfAttrParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_syntaxNodeKindOfAttrParam(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* _init_l_Lean_declareBuiltinElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_regBuiltinTermElab");
return x_1;
}
}
lean_object* _init_l_Lean_declareBuiltinElab___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_declareBuiltinElab___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_declareBuiltinElab___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to emit registration code for builtin term elaborator '");
return x_1;
}
}
lean_object* l_Lean_declareBuiltinElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_6 = l_Lean_declareBuiltinElab___closed__2;
lean_inc(x_4);
x_7 = l_Lean_Name_append___main(x_6, x_4);
x_8 = lean_box(0);
x_9 = l_Lean_nameToExprAux___main(x_3);
lean_inc(x_4);
x_10 = l_Lean_nameToExprAux___main(x_4);
lean_inc(x_4);
x_11 = lean_expr_mk_const(x_4, x_8);
x_12 = l_Lean_Parser_declareBuiltinParser___closed__6;
x_13 = lean_array_push(x_12, x_9);
x_14 = lean_array_push(x_13, x_10);
x_15 = lean_array_push(x_14, x_11);
x_16 = l_Lean_mkCApp(x_2, x_15);
lean_dec(x_15);
x_17 = l_Lean_Parser_declareBuiltinParser___closed__5;
lean_inc(x_7);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_8);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_box(0);
x_20 = 0;
x_21 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_16);
lean_ctor_set(x_21, 2, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*3, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_Options_empty;
x_24 = l_Lean_Environment_addAndCompile(x_1, x_23, x_22);
lean_dec(x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_7);
x_25 = l_System_FilePath_dirName___closed__1;
x_26 = l_Lean_Name_toStringWithSep___main(x_25, x_4);
x_27 = l_Lean_declareBuiltinElab___closed__3;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = l_Char_HasRepr___closed__1;
x_30 = lean_string_append(x_28, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_5);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_4);
x_32 = lean_ctor_get(x_24, 0);
lean_inc(x_32);
lean_dec(x_24);
x_33 = l_Lean_initAttr;
x_34 = lean_box(0);
x_35 = l_Lean_ParametricAttribute_setParam___rarg(x_33, x_32, x_7, x_34);
x_36 = l_IO_ofExcept___at_Lean_Parser_declareBuiltinParser___spec__1(x_35, x_5);
lean_dec(x_35);
return x_36;
}
}
}
lean_object* _init_l_Lean_declareBuiltinTermElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("addBuiltinTermElab");
return x_1;
}
}
lean_object* _init_l_Lean_declareBuiltinTermElab___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExprAux___main___closed__4;
x_2 = l_Lean_declareBuiltinTermElab___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_declareBuiltinTermElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_declareBuiltinTermElab___closed__2;
x_6 = l_Lean_declareBuiltinElab(x_1, x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* _init_l_Lean_declareBuiltinCommandElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("addBuiltinCommandElab");
return x_1;
}
}
lean_object* _init_l_Lean_declareBuiltinCommandElab___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExprAux___main___closed__4;
x_2 = l_Lean_declareBuiltinCommandElab___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_declareBuiltinCommandElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_declareBuiltinCommandElab___closed__2;
x_6 = l_Lean_declareBuiltinElab(x_1, x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid attribute 'builtinTermElab', must be persistent");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected term elaborator type at '");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' `TermElab` expected");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("TermElab");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExprAux___main___closed__4;
x_2 = l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
if (x_4 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
lean_inc(x_1);
x_9 = l_Lean_syntaxNodeKindOfAttrParam(x_1, x_8, x_3, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_22; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
lean_inc(x_2);
lean_inc(x_1);
x_22 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_mkInitAttr___lambda__1___closed__1;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_ConstantInfo_type(x_25);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 4)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5;
x_29 = lean_name_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_10);
lean_dec(x_1);
x_30 = lean_box(0);
x_13 = x_30;
goto block_21;
}
else
{
lean_object* x_31; 
lean_dec(x_12);
x_31 = l_Lean_declareBuiltinTermElab(x_1, x_10, x_2, x_11);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_1);
x_32 = lean_box(0);
x_13 = x_32;
goto block_21;
}
}
block_21:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_2);
x_16 = l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3;
x_19 = lean_string_append(x_17, x_18);
if (lean_is_scalar(x_12)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_12;
 lean_ctor_set_tag(x_20, 1);
}
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_11);
return x_20;
}
}
else
{
uint8_t x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_9);
if (x_33 == 0)
{
return x_9;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_9, 0);
x_35 = lean_ctor_get(x_9, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_9);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinTermElab");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_registerBuiltinTermElabAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_registerBuiltinTermElabAttr___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_registerBuiltinTermElabAttr___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Builtin term elaborator");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_registerBuiltinTermElabAttr___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinTermElabAttr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_1 = l_Lean_registerBuiltinTermElabAttr___closed__2;
x_2 = l_Lean_registerBuiltinTermElabAttr___closed__5;
x_3 = l_Lean_registerBuiltinTermElabAttr___closed__6;
x_4 = l_Lean_registerBuiltinTermElabAttr___closed__3;
x_5 = l_Lean_registerBuiltinTermElabAttr___closed__4;
x_6 = l_Lean_AttributeImpl_inhabited___closed__4;
x_7 = l_Lean_AttributeImpl_inhabited___closed__5;
x_8 = 1;
x_9 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_4);
lean_ctor_set(x_9, 4, x_5);
lean_ctor_set(x_9, 5, x_6);
lean_ctor_set(x_9, 6, x_7);
lean_ctor_set(x_9, 7, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*8, x_8);
return x_9;
}
}
lean_object* l_Lean_registerBuiltinTermElabAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_registerBuiltinTermElabAttr___closed__7;
x_3 = l_Lean_registerAttribute(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_registerBuiltinTermElabAttr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_registerBuiltinTermElabAttr___lambda__1(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid attribute 'builtinCommandElab', must be persistent");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected command elaborator type at '");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' `CommandElab` expected");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CommandElab");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExprAux___main___closed__4;
x_2 = l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
if (x_4 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Parser_Command_docComment___elambda__1___closed__2;
lean_inc(x_1);
x_9 = l_Lean_syntaxNodeKindOfAttrParam(x_1, x_8, x_3, x_5);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_22; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
lean_inc(x_2);
lean_inc(x_1);
x_22 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_mkInitAttr___lambda__1___closed__1;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
x_26 = l_Lean_ConstantInfo_type(x_25);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 4)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5;
x_29 = lean_name_dec_eq(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_10);
lean_dec(x_1);
x_30 = lean_box(0);
x_13 = x_30;
goto block_21;
}
else
{
lean_object* x_31; 
lean_dec(x_12);
x_31 = l_Lean_declareBuiltinCommandElab(x_1, x_10, x_2, x_11);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_1);
x_32 = lean_box(0);
x_13 = x_32;
goto block_21;
}
}
block_21:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_13);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_2);
x_16 = l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3;
x_19 = lean_string_append(x_17, x_18);
if (lean_is_scalar(x_12)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_12;
 lean_ctor_set_tag(x_20, 1);
}
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_11);
return x_20;
}
}
else
{
uint8_t x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_9);
if (x_33 == 0)
{
return x_9;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_9, 0);
x_35 = lean_ctor_get(x_9, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_9);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("builtinCommandElab");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_registerBuiltinCommandElabAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_registerBuiltinCommandElabAttr___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_registerBuiltinCommandElabAttr___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Builtin command elaborator");
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_registerBuiltinCommandElabAttr___lambda__1___boxed), 5, 0);
return x_1;
}
}
lean_object* _init_l_Lean_registerBuiltinCommandElabAttr___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_1 = l_Lean_registerBuiltinCommandElabAttr___closed__2;
x_2 = l_Lean_registerBuiltinCommandElabAttr___closed__5;
x_3 = l_Lean_registerBuiltinCommandElabAttr___closed__6;
x_4 = l_Lean_registerBuiltinCommandElabAttr___closed__3;
x_5 = l_Lean_registerBuiltinCommandElabAttr___closed__4;
x_6 = l_Lean_AttributeImpl_inhabited___closed__4;
x_7 = l_Lean_AttributeImpl_inhabited___closed__5;
x_8 = 1;
x_9 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_2);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_4);
lean_ctor_set(x_9, 4, x_5);
lean_ctor_set(x_9, 5, x_6);
lean_ctor_set(x_9, 6, x_7);
lean_ctor_set(x_9, 7, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*8, x_8);
return x_9;
}
}
lean_object* l_Lean_registerBuiltinCommandElabAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_registerBuiltinCommandElabAttr___closed__7;
x_3 = l_Lean_registerAttribute(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_registerBuiltinCommandElabAttr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_registerBuiltinCommandElabAttr___lambda__1(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_ElabAttribute_Inhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_EnvExtension_Inhabited___rarg___closed__1;
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_6, 2, x_3);
x_7 = lean_box(0);
x_8 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
x_9 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_10 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
x_11 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
x_12 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_12, 0, x_6);
lean_ctor_set(x_12, 1, x_7);
lean_ctor_set(x_12, 2, x_8);
lean_ctor_set(x_12, 3, x_9);
lean_ctor_set(x_12, 4, x_10);
lean_ctor_set(x_12, 5, x_11);
x_13 = l_Lean_AttributeImpl_inhabited___closed__6;
x_14 = l_String_splitAux___main___closed__1;
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_12);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
}
lean_object* l_Lean_ElabAttribute_Inhabited(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ElabAttribute_Inhabited___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_mkElabAttribute___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_ref_get(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_4);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* _init_l_Lean_mkElabAttribute___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" elaborator attribute");
return x_1;
}
}
lean_object* l_Lean_mkElabAttribute___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_mkElabAttribute___rarg___lambda__2___closed__1;
x_4 = lean_string_append(x_1, x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
lean_object* _init_l_Lean_mkElabAttribute___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" elaborator");
return x_1;
}
}
lean_object* l_Lean_mkElabAttribute___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_6, 0, x_4);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_9 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_inc(x_2);
x_10 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_8);
lean_ctor_set(x_10, 3, x_9);
lean_ctor_set(x_10, 4, x_7);
x_11 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg(x_1, x_10, x_5);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_3);
x_15 = lean_string_append(x_3, x_14);
lean_inc(x_2);
x_16 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_16, 0, x_2);
lean_inc(x_2);
x_17 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_17, 0, x_2);
x_18 = l_Lean_AttributeImpl_inhabited___closed__1;
x_19 = l_Lean_AttributeImpl_inhabited___closed__4;
x_20 = l_Lean_AttributeImpl_inhabited___closed__5;
x_21 = 0;
x_22 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_22, 2, x_18);
lean_ctor_set(x_22, 3, x_16);
lean_ctor_set(x_22, 4, x_17);
lean_ctor_set(x_22, 5, x_19);
lean_ctor_set(x_22, 6, x_20);
lean_ctor_set(x_22, 7, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*8, x_21);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_13);
lean_ctor_set(x_23, 2, x_3);
lean_ctor_set(x_11, 0, x_23);
return x_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_24 = lean_ctor_get(x_11, 0);
x_25 = lean_ctor_get(x_11, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_11);
x_26 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_3);
x_27 = lean_string_append(x_3, x_26);
lean_inc(x_2);
x_28 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_28, 0, x_2);
lean_inc(x_2);
x_29 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_29, 0, x_2);
x_30 = l_Lean_AttributeImpl_inhabited___closed__1;
x_31 = l_Lean_AttributeImpl_inhabited___closed__4;
x_32 = l_Lean_AttributeImpl_inhabited___closed__5;
x_33 = 0;
x_34 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_34, 0, x_2);
lean_ctor_set(x_34, 1, x_27);
lean_ctor_set(x_34, 2, x_30);
lean_ctor_set(x_34, 3, x_28);
lean_ctor_set(x_34, 4, x_29);
lean_ctor_set(x_34, 5, x_31);
lean_ctor_set(x_34, 6, x_32);
lean_ctor_set(x_34, 7, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*8, x_33);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_24);
lean_ctor_set(x_35, 2, x_3);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_25);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_11);
if (x_37 == 0)
{
return x_11;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_11, 0);
x_39 = lean_ctor_get(x_11, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_11);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Lean_mkElabAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_mkElabAttribute___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkElabAttribute___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_mkElabAttribute___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkElabAttribute___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_name_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_3);
return x_10;
}
}
}
}
lean_object* _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 1;
x_2 = l_HashMap_Inhabited___closed__1;
x_3 = l_PersistentHashMap_HasEmptyc___closed__1;
x_4 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set_uint8(x_4, sizeof(void*)*2, x_1);
return x_4;
}
}
lean_object* _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_initializing(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Init_Lean_Environment_5__envExtensionsRef;
x_14 = lean_io_ref_get(x_13, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_get_size(x_15);
lean_dec(x_15);
x_18 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_1);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_io_ref_get(x_13, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_io_ref_reset(x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_19);
x_26 = x_19;
x_27 = lean_array_push(x_21, x_26);
x_28 = lean_io_ref_set(x_13, x_27, x_24);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_19);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_19);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_21);
lean_dec(x_19);
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_19);
x_41 = !lean_is_exclusive(x_20);
if (x_41 == 0)
{
return x_20;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_20, 0);
x_43 = lean_ctor_get(x_20, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_20);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_3);
if (x_49 == 0)
{
return x_3;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_3, 0);
x_51 = lean_ctor_get(x_3, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_3);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Environment_8__persistentEnvExtensionsRef;
x_4 = lean_io_ref_get(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3(x_1, x_6, x_8);
lean_dec(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_free_object(x_4);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = l_Array_empty___closed__1;
lean_inc(x_10);
x_12 = lean_apply_1(x_10, x_11);
x_13 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_14 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4(x_14, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 4);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set(x_22, 4, x_20);
lean_ctor_set(x_22, 5, x_21);
x_23 = lean_io_ref_get(x_3, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_io_ref_reset(x_3, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_22);
x_29 = x_22;
x_30 = lean_array_push(x_24, x_29);
x_31 = lean_io_ref_set(x_3, x_30, x_27);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_22);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_24);
lean_dec(x_22);
x_40 = !lean_is_exclusive(x_26);
if (x_40 == 0)
{
return x_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 0);
x_42 = lean_ctor_get(x_26, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_26);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_22);
x_44 = !lean_is_exclusive(x_23);
if (x_44 == 0)
{
return x_23;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_23, 0);
x_46 = lean_ctor_get(x_23, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_23);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_10);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_15);
if (x_48 == 0)
{
return x_15;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_15, 0);
x_50 = lean_ctor_get(x_15, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_15);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = l_System_FilePath_dirName___closed__1;
x_54 = l_Lean_Name_toStringWithSep___main(x_53, x_52);
x_55 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_56 = lean_string_append(x_55, x_54);
lean_dec(x_54);
x_57 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_58 = lean_string_append(x_56, x_57);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_58);
return x_4;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_59 = lean_ctor_get(x_4, 0);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_4);
x_61 = lean_unsigned_to_nat(0u);
x_62 = l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3(x_1, x_59, x_61);
lean_dec(x_59);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
x_64 = l_Array_empty___closed__1;
lean_inc(x_63);
x_65 = lean_apply_1(x_63, x_64);
x_66 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_67 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_67, 0, x_65);
lean_closure_set(x_67, 1, x_66);
x_68 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4(x_67, x_60);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_ctor_get(x_1, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_1, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_1, 4);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_75, 0, x_69);
lean_ctor_set(x_75, 1, x_71);
lean_ctor_set(x_75, 2, x_63);
lean_ctor_set(x_75, 3, x_72);
lean_ctor_set(x_75, 4, x_73);
lean_ctor_set(x_75, 5, x_74);
x_76 = lean_io_ref_get(x_3, x_70);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_io_ref_reset(x_3, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_75);
x_82 = x_75;
x_83 = lean_array_push(x_77, x_82);
x_84 = lean_io_ref_set(x_3, x_83, x_80);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_75);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_75);
x_88 = lean_ctor_get(x_84, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_90 = x_84;
} else {
 lean_dec_ref(x_84);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_77);
lean_dec(x_75);
x_92 = lean_ctor_get(x_79, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_79, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_94 = x_79;
} else {
 lean_dec_ref(x_79);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_75);
x_96 = lean_ctor_get(x_76, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_76, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_98 = x_76;
} else {
 lean_dec_ref(x_76);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_63);
lean_dec(x_1);
x_100 = lean_ctor_get(x_68, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_68, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_102 = x_68;
} else {
 lean_dec_ref(x_68);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
lean_dec(x_1);
x_105 = l_System_FilePath_dirName___closed__1;
x_106 = l_Lean_Name_toStringWithSep___main(x_105, x_104);
x_107 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_108 = lean_string_append(x_107, x_106);
lean_dec(x_106);
x_109 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_110 = lean_string_append(x_108, x_109);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_60);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_1);
x_112 = !lean_is_exclusive(x_4);
if (x_112 == 0)
{
return x_4;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_4, 0);
x_114 = lean_ctor_get(x_4, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_4);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
lean_object* l_Lean_mkElabAttribute___at_Lean_mkTermElabAttribute___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_8 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_6);
x_10 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__2(x_9, x_4);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_2);
x_14 = lean_string_append(x_2, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_15, 0, x_1);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_16, 0, x_1);
x_17 = l_Lean_AttributeImpl_inhabited___closed__1;
x_18 = l_Lean_AttributeImpl_inhabited___closed__4;
x_19 = l_Lean_AttributeImpl_inhabited___closed__5;
x_20 = 0;
x_21 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_15);
lean_ctor_set(x_21, 4, x_16);
lean_ctor_set(x_21, 5, x_18);
lean_ctor_set(x_21, 6, x_19);
lean_ctor_set(x_21, 7, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*8, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_2);
x_26 = lean_string_append(x_2, x_25);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_27, 0, x_1);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_28, 0, x_1);
x_29 = l_Lean_AttributeImpl_inhabited___closed__1;
x_30 = l_Lean_AttributeImpl_inhabited___closed__4;
x_31 = l_Lean_AttributeImpl_inhabited___closed__5;
x_32 = 0;
x_33 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_29);
lean_ctor_set(x_33, 3, x_27);
lean_ctor_set(x_33, 4, x_28);
lean_ctor_set(x_33, 5, x_30);
lean_ctor_set(x_33, 6, x_31);
lean_ctor_set(x_33, 7, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*8, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_2);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_24);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_10, 0);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_10);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* _init_l_Lean_mkTermElabAttribute___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabTerm");
return x_1;
}
}
lean_object* _init_l_Lean_mkTermElabAttribute___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_mkTermElabAttribute___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_mkTermElabAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_mkTermElabAttribute___closed__2;
x_3 = l_Lean_Parser_mkTermParserAttribute___closed__4;
x_4 = l_Lean_builtinTermElabTable;
x_5 = l_Lean_mkElabAttribute___at_Lean_mkTermElabAttribute___spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_mkTermElabAttribute___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* _init_l_Lean_termElabAttribute___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_EnvExtension_Inhabited___rarg___closed__1;
x_3 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l_Lean_termElabAttribute___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = l_Lean_termElabAttribute___closed__1;
x_2 = lean_box(0);
x_3 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
x_4 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_5 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
x_6 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__4;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_3);
lean_ctor_set(x_7, 3, x_4);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_6);
return x_7;
}
}
lean_object* _init_l_Lean_termElabAttribute___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_AttributeImpl_inhabited___closed__6;
x_2 = l_Lean_termElabAttribute___closed__2;
x_3 = l_String_splitAux___main___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
uint8_t l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_name_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean_dec(x_3);
return x_10;
}
}
}
}
lean_object* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_initializing(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l___private_Init_Lean_Environment_5__envExtensionsRef;
x_14 = lean_io_ref_get(x_13, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_array_get_size(x_15);
lean_dec(x_15);
x_18 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2;
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_1);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_io_ref_get(x_13, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_io_ref_reset(x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_19);
x_26 = x_19;
x_27 = lean_array_push(x_21, x_26);
x_28 = lean_io_ref_set(x_13, x_27, x_24);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_19);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
lean_dec(x_19);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_21);
lean_dec(x_19);
x_37 = !lean_is_exclusive(x_23);
if (x_37 == 0)
{
return x_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_23, 0);
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_23);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_19);
x_41 = !lean_is_exclusive(x_20);
if (x_41 == 0)
{
return x_20;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_20, 0);
x_43 = lean_ctor_get(x_20, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_20);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_3);
if (x_49 == 0)
{
return x_3;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_3, 0);
x_51 = lean_ctor_get(x_3, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_3);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Environment_8__persistentEnvExtensionsRef;
x_4 = lean_io_ref_get(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3(x_1, x_6, x_8);
lean_dec(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_free_object(x_4);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = l_Array_empty___closed__1;
lean_inc(x_10);
x_12 = lean_apply_1(x_10, x_11);
x_13 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_14 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__4(x_14, x_7);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 3);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 4);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_18);
lean_ctor_set(x_22, 2, x_10);
lean_ctor_set(x_22, 3, x_19);
lean_ctor_set(x_22, 4, x_20);
lean_ctor_set(x_22, 5, x_21);
x_23 = lean_io_ref_get(x_3, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_io_ref_reset(x_3, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_22);
x_29 = x_22;
x_30 = lean_array_push(x_24, x_29);
x_31 = lean_io_ref_set(x_3, x_30, x_27);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_22);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_22);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_22);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_24);
lean_dec(x_22);
x_40 = !lean_is_exclusive(x_26);
if (x_40 == 0)
{
return x_26;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_26, 0);
x_42 = lean_ctor_get(x_26, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_26);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_22);
x_44 = !lean_is_exclusive(x_23);
if (x_44 == 0)
{
return x_23;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_23, 0);
x_46 = lean_ctor_get(x_23, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_23);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_10);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_15);
if (x_48 == 0)
{
return x_15;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_15, 0);
x_50 = lean_ctor_get(x_15, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_15);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = l_System_FilePath_dirName___closed__1;
x_54 = l_Lean_Name_toStringWithSep___main(x_53, x_52);
x_55 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_56 = lean_string_append(x_55, x_54);
lean_dec(x_54);
x_57 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_58 = lean_string_append(x_56, x_57);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_58);
return x_4;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_59 = lean_ctor_get(x_4, 0);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_4);
x_61 = lean_unsigned_to_nat(0u);
x_62 = l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3(x_1, x_59, x_61);
lean_dec(x_59);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
x_64 = l_Array_empty___closed__1;
lean_inc(x_63);
x_65 = lean_apply_1(x_63, x_64);
x_66 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_67 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_67, 0, x_65);
lean_closure_set(x_67, 1, x_66);
x_68 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__4(x_67, x_60);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_ctor_get(x_1, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_1, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_1, 4);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_75, 0, x_69);
lean_ctor_set(x_75, 1, x_71);
lean_ctor_set(x_75, 2, x_63);
lean_ctor_set(x_75, 3, x_72);
lean_ctor_set(x_75, 4, x_73);
lean_ctor_set(x_75, 5, x_74);
x_76 = lean_io_ref_get(x_3, x_70);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_io_ref_reset(x_3, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_81 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean_inc(x_75);
x_82 = x_75;
x_83 = lean_array_push(x_77, x_82);
x_84 = lean_io_ref_set(x_3, x_83, x_80);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_75);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_75);
x_88 = lean_ctor_get(x_84, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_90 = x_84;
} else {
 lean_dec_ref(x_84);
 x_90 = lean_box(0);
}
if (lean_is_scalar(x_90)) {
 x_91 = lean_alloc_ctor(1, 2, 0);
} else {
 x_91 = x_90;
}
lean_ctor_set(x_91, 0, x_88);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_77);
lean_dec(x_75);
x_92 = lean_ctor_get(x_79, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_79, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_79)) {
 lean_ctor_release(x_79, 0);
 lean_ctor_release(x_79, 1);
 x_94 = x_79;
} else {
 lean_dec_ref(x_79);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_75);
x_96 = lean_ctor_get(x_76, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_76, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_98 = x_76;
} else {
 lean_dec_ref(x_76);
 x_98 = lean_box(0);
}
if (lean_is_scalar(x_98)) {
 x_99 = lean_alloc_ctor(1, 2, 0);
} else {
 x_99 = x_98;
}
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_63);
lean_dec(x_1);
x_100 = lean_ctor_get(x_68, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_68, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_102 = x_68;
} else {
 lean_dec_ref(x_68);
 x_102 = lean_box(0);
}
if (lean_is_scalar(x_102)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_102;
}
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
lean_dec(x_1);
x_105 = l_System_FilePath_dirName___closed__1;
x_106 = l_Lean_Name_toStringWithSep___main(x_105, x_104);
x_107 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_108 = lean_string_append(x_107, x_106);
lean_dec(x_106);
x_109 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_110 = lean_string_append(x_108, x_109);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_60);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_1);
x_112 = !lean_is_exclusive(x_4);
if (x_112 == 0)
{
return x_4;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_4, 0);
x_114 = lean_ctor_get(x_4, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_4);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
lean_object* l_Lean_mkElabAttribute___at_Lean_mkCommandElabAttribute___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_5, 0, x_3);
lean_inc(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_mkElabAttribute___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_2);
x_7 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_8 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__3;
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_6);
x_10 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkCommandElabAttribute___spec__2(x_9, x_4);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_2);
x_14 = lean_string_append(x_2, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_15, 0, x_1);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_16, 0, x_1);
x_17 = l_Lean_AttributeImpl_inhabited___closed__1;
x_18 = l_Lean_AttributeImpl_inhabited___closed__4;
x_19 = l_Lean_AttributeImpl_inhabited___closed__5;
x_20 = 0;
x_21 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_17);
lean_ctor_set(x_21, 3, x_15);
lean_ctor_set(x_21, 4, x_16);
lean_ctor_set(x_21, 5, x_18);
lean_ctor_set(x_21, 6, x_19);
lean_ctor_set(x_21, 7, x_19);
lean_ctor_set_uint8(x_21, sizeof(void*)*8, x_20);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_2);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = l_Lean_mkElabAttribute___rarg___closed__1;
lean_inc(x_2);
x_26 = lean_string_append(x_2, x_25);
lean_inc(x_1);
x_27 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean_closure_set(x_27, 0, x_1);
lean_inc(x_1);
x_28 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean_closure_set(x_28, 0, x_1);
x_29 = l_Lean_AttributeImpl_inhabited___closed__1;
x_30 = l_Lean_AttributeImpl_inhabited___closed__4;
x_31 = l_Lean_AttributeImpl_inhabited___closed__5;
x_32 = 0;
x_33 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_29);
lean_ctor_set(x_33, 3, x_27);
lean_ctor_set(x_33, 4, x_28);
lean_ctor_set(x_33, 5, x_30);
lean_ctor_set(x_33, 6, x_31);
lean_ctor_set(x_33, 7, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*8, x_32);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_2);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_24);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_10, 0);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_10);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* _init_l_Lean_mkCommandElabAttribute___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("commandTerm");
return x_1;
}
}
lean_object* _init_l_Lean_mkCommandElabAttribute___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_mkCommandElabAttribute___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_mkCommandElabAttribute(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_mkCommandElabAttribute___closed__2;
x_3 = l_Lean_Parser_mkCommandParserAttribute___closed__4;
x_4 = l_Lean_builtinCommandElabTable;
x_5 = l_Lean_mkElabAttribute___at_Lean_mkCommandElabAttribute___spec__1(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_mkCommandElabAttribute___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_logMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_3, 1, x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_3, 2);
x_12 = lean_ctor_get(x_3, 3);
x_13 = lean_ctor_get(x_3, 4);
x_14 = lean_ctor_get(x_3, 5);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_10);
x_16 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_11);
lean_ctor_set(x_16, 3, x_12);
lean_ctor_set(x_16, 4, x_13);
lean_ctor_set(x_16, 5, x_14);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Lean_Elab_logMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_logMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_getPosition(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
x_6 = l_Lean_FileMap_toPosition(x_4, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_Lean_FileMap_toPosition(x_8, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
lean_object* l_Lean_Elab_getPosition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getPosition(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_mkMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_4, 2);
lean_inc(x_10);
x_11 = l_Lean_FileMap_toPosition(x_6, x_10);
lean_dec(x_10);
x_12 = 2;
x_13 = l_String_splitAux___main___closed__1;
lean_inc(x_5);
x_14 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_7);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_9);
lean_ctor_set_uint8(x_14, sizeof(void*)*5, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_2, 0);
x_17 = l_Lean_FileMap_toPosition(x_6, x_16);
x_18 = 2;
x_19 = l_String_splitAux___main___closed__1;
lean_inc(x_5);
x_20 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_17);
lean_ctor_set(x_20, 2, x_7);
lean_ctor_set(x_20, 3, x_19);
lean_ctor_set(x_20, 4, x_9);
lean_ctor_set_uint8(x_20, sizeof(void*)*5, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
}
}
lean_object* l_Lean_Elab_mkMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_mkMessage(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_logErrorAt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_1);
x_6 = l_Lean_Elab_mkMessage(x_2, x_5, x_3, x_4);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_logMessage(x_7, x_3, x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_logErrorAt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_logErrorAt(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_logErrorUsingCmdPos(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 2);
lean_inc(x_4);
x_5 = l_Lean_Elab_logErrorAt(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_logErrorUsingCmdPos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_logErrorUsingCmdPos(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_getPos___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_getPos___rarg(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
}
lean_object* l_Lean_Elab_getPos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getPos___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getPos___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getPos___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_logError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Elab_getPos___rarg(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Elab_logErrorAt(x_6, x_2, x_3, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_logError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_logError___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_logError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_logError___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_logElabException___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("kernel exception");
return x_1;
}
}
lean_object* l_Lean_Elab_logElabException(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_3);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_3, 1);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_3, 1, x_42);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_3);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_3, 0);
x_46 = lean_ctor_get(x_3, 1);
x_47 = lean_ctor_get(x_3, 2);
x_48 = lean_ctor_get(x_3, 3);
x_49 = lean_ctor_get(x_3, 4);
x_50 = lean_ctor_get(x_3, 5);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_3);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_39);
lean_ctor_set(x_51, 1, x_46);
x_52 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_52, 2, x_47);
lean_ctor_set(x_52, 3, x_48);
lean_ctor_set(x_52, 4, x_49);
lean_ctor_set(x_52, 5, x_50);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
case 2:
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
lean_dec(x_1);
if (lean_obj_tag(x_55) == 11)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_box(0);
x_58 = l_Lean_Elab_mkMessage(x_56, x_57, x_2, x_3);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_58, 1);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_58, 0);
x_63 = lean_ctor_get(x_60, 1);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_60, 1, x_64);
x_65 = lean_box(0);
lean_ctor_set(x_58, 0, x_65);
return x_58;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_66 = lean_ctor_get(x_58, 0);
x_67 = lean_ctor_get(x_60, 0);
x_68 = lean_ctor_get(x_60, 1);
x_69 = lean_ctor_get(x_60, 2);
x_70 = lean_ctor_get(x_60, 3);
x_71 = lean_ctor_get(x_60, 4);
x_72 = lean_ctor_get(x_60, 5);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_60);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_66);
lean_ctor_set(x_73, 1, x_68);
x_74 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_74, 0, x_67);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_74, 2, x_69);
lean_ctor_set(x_74, 3, x_70);
lean_ctor_set(x_74, 4, x_71);
lean_ctor_set(x_74, 5, x_72);
x_75 = lean_box(0);
lean_ctor_set(x_58, 1, x_74);
lean_ctor_set(x_58, 0, x_75);
return x_58;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_76 = lean_ctor_get(x_58, 1);
x_77 = lean_ctor_get(x_58, 0);
lean_inc(x_76);
lean_inc(x_77);
lean_dec(x_58);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
x_80 = lean_ctor_get(x_76, 2);
lean_inc(x_80);
x_81 = lean_ctor_get(x_76, 3);
lean_inc(x_81);
x_82 = lean_ctor_get(x_76, 4);
lean_inc(x_82);
x_83 = lean_ctor_get(x_76, 5);
lean_inc(x_83);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 lean_ctor_release(x_76, 2);
 lean_ctor_release(x_76, 3);
 lean_ctor_release(x_76, 4);
 lean_ctor_release(x_76, 5);
 x_84 = x_76;
} else {
 lean_dec_ref(x_76);
 x_84 = lean_box(0);
}
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_77);
lean_ctor_set(x_85, 1, x_79);
if (lean_is_scalar(x_84)) {
 x_86 = lean_alloc_ctor(0, 6, 0);
} else {
 x_86 = x_84;
}
lean_ctor_set(x_86, 0, x_78);
lean_ctor_set(x_86, 1, x_85);
lean_ctor_set(x_86, 2, x_80);
lean_ctor_set(x_86, 3, x_81);
lean_ctor_set(x_86, 4, x_82);
lean_ctor_set(x_86, 5, x_83);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
lean_object* x_89; 
lean_dec(x_55);
x_89 = lean_box(0);
x_4 = x_89;
goto block_38;
}
}
case 4:
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_3);
return x_91;
}
default: 
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = lean_ctor_get(x_1, 0);
lean_inc(x_92);
lean_dec(x_1);
x_93 = lean_box(0);
x_94 = l_Lean_Elab_mkMessage(x_92, x_93, x_2, x_3);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = lean_ctor_get(x_94, 1);
x_97 = !lean_is_exclusive(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_ctor_get(x_94, 0);
x_99 = lean_ctor_get(x_96, 1);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
lean_ctor_set(x_96, 1, x_100);
x_101 = lean_box(0);
lean_ctor_set(x_94, 0, x_101);
return x_94;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_94, 0);
x_103 = lean_ctor_get(x_96, 0);
x_104 = lean_ctor_get(x_96, 1);
x_105 = lean_ctor_get(x_96, 2);
x_106 = lean_ctor_get(x_96, 3);
x_107 = lean_ctor_get(x_96, 4);
x_108 = lean_ctor_get(x_96, 5);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_96);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_102);
lean_ctor_set(x_109, 1, x_104);
x_110 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_110, 0, x_103);
lean_ctor_set(x_110, 1, x_109);
lean_ctor_set(x_110, 2, x_105);
lean_ctor_set(x_110, 3, x_106);
lean_ctor_set(x_110, 4, x_107);
lean_ctor_set(x_110, 5, x_108);
x_111 = lean_box(0);
lean_ctor_set(x_94, 1, x_110);
lean_ctor_set(x_94, 0, x_111);
return x_94;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_112 = lean_ctor_get(x_94, 1);
x_113 = lean_ctor_get(x_94, 0);
lean_inc(x_112);
lean_inc(x_113);
lean_dec(x_94);
x_114 = lean_ctor_get(x_112, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_112, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_112, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_112, 3);
lean_inc(x_117);
x_118 = lean_ctor_get(x_112, 4);
lean_inc(x_118);
x_119 = lean_ctor_get(x_112, 5);
lean_inc(x_119);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 lean_ctor_release(x_112, 2);
 lean_ctor_release(x_112, 3);
 lean_ctor_release(x_112, 4);
 lean_ctor_release(x_112, 5);
 x_120 = x_112;
} else {
 lean_dec_ref(x_112);
 x_120 = lean_box(0);
}
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_113);
lean_ctor_set(x_121, 1, x_115);
if (lean_is_scalar(x_120)) {
 x_122 = lean_alloc_ctor(0, 6, 0);
} else {
 x_122 = x_120;
}
lean_ctor_set(x_122, 0, x_114);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_122, 2, x_116);
lean_ctor_set(x_122, 3, x_117);
lean_ctor_set(x_122, 4, x_118);
lean_ctor_set(x_122, 5, x_119);
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
block_38:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = l_Lean_Elab_logElabException___closed__1;
x_7 = l_Lean_Elab_mkMessage(x_6, x_5, x_2, x_3);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_7, 1);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_9, 1, x_13);
x_14 = lean_box(0);
lean_ctor_set(x_7, 0, x_14);
return x_7;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_17);
x_23 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_22);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_21);
x_24 = lean_box(0);
lean_ctor_set(x_7, 1, x_23);
lean_ctor_set(x_7, 0, x_24);
return x_7;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_25 = lean_ctor_get(x_7, 1);
x_26 = lean_ctor_get(x_7, 0);
lean_inc(x_25);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_25, 3);
lean_inc(x_30);
x_31 = lean_ctor_get(x_25, 4);
lean_inc(x_31);
x_32 = lean_ctor_get(x_25, 5);
lean_inc(x_32);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 lean_ctor_release(x_25, 2);
 lean_ctor_release(x_25, 3);
 lean_ctor_release(x_25, 4);
 lean_ctor_release(x_25, 5);
 x_33 = x_25;
} else {
 lean_dec_ref(x_25);
 x_33 = lean_box(0);
}
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_28);
if (lean_is_scalar(x_33)) {
 x_35 = lean_alloc_ctor(0, 6, 0);
} else {
 x_35 = x_33;
}
lean_ctor_set(x_35, 0, x_27);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_29);
lean_ctor_set(x_35, 3, x_30);
lean_ctor_set(x_35, 4, x_31);
lean_ctor_set(x_35, 5, x_32);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
}
lean_object* l_Lean_Elab_logElabException___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_logElabException(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_logErrorAndThrow___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_logError___rarg(x_1, x_2, x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = lean_box(4);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_box(4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Elab_logErrorAndThrow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_logErrorAndThrow___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_logErrorAndThrow___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_logErrorAndThrow___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_logUnknownDecl___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown declaration '");
return x_1;
}
}
lean_object* l_Lean_Elab_logUnknownDecl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_System_FilePath_dirName___closed__1;
x_6 = l_Lean_Name_toStringWithSep___main(x_5, x_2);
x_7 = l_Lean_Elab_logUnknownDecl___rarg___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = l_Char_HasRepr___closed__1;
x_10 = lean_string_append(x_8, x_9);
x_11 = l_Lean_Elab_logError___rarg(x_1, x_10, x_3, x_4);
return x_11;
}
}
lean_object* l_Lean_Elab_logUnknownDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_logUnknownDecl___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_logUnknownDecl___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_logUnknownDecl___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_getEnv___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_getEnv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getEnv___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getEnv___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_getEnv(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_setEnv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_3, 2);
x_10 = lean_ctor_get(x_3, 3);
x_11 = lean_ctor_get(x_3, 4);
x_12 = lean_ctor_get(x_3, 5);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_9);
lean_ctor_set(x_13, 3, x_10);
lean_ctor_set(x_13, 4, x_11);
lean_ctor_set(x_13, 5, x_12);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_Elab_setEnv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_setEnv(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_dec_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = 5;
x_6 = l_PersistentHashMap_insertAux___main___rarg___closed__2;
x_7 = x_2 & x_6;
x_8 = lean_usize_to_nat(x_7);
x_9 = lean_box(2);
x_10 = lean_array_get(x_9, x_4, x_8);
lean_dec(x_8);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_name_dec_eq(x_3, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
}
case 1:
{
lean_object* x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = x_2 >> x_5;
x_18 = l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3(x_16, x_17, x_3);
lean_dec(x_16);
return x_18;
}
default: 
{
lean_object* x_19; 
x_19 = lean_box(0);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4(x_20, x_21, lean_box(0), x_22, x_3);
return x_23;
}
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_name_hash_usize(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3(x_3, x_4, x_2);
return x_5;
}
}
lean_object* l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_name_hash_usize(x_2);
x_6 = lean_usize_modn(x_5, x_4);
lean_dec(x_4);
x_7 = lean_array_uget(x_3, x_6);
x_8 = l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6(x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5(x_4, x_2);
return x_7;
}
else
{
return x_6;
}
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5(x_8, x_2);
return x_9;
}
}
}
lean_object* _init_l_Lean_Elab_elabCommand___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected command");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_elabCommand___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("command '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_elabCommand___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has not been implemented");
return x_1;
}
}
lean_object* l_Lean_Elab_elabCommand(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Lean_commandElabAttribute;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = l_Lean_PersistentEnvExtension_getState___rarg(x_6, x_7);
lean_dec(x_7);
x_9 = l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1(x_8, x_4);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = l_System_FilePath_dirName___closed__1;
x_11 = l_Lean_Name_toStringWithSep___main(x_10, x_4);
x_12 = l_Lean_Elab_elabCommand___closed__2;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_Lean_Elab_elabCommand___closed__3;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_Lean_Elab_logError___rarg(x_1, x_15, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_apply_3(x_17, x_1, x_2, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_19 = l_Lean_Elab_elabCommand___closed__1;
x_20 = l_Lean_Elab_logErrorUsingCmdPos(x_19, x_2, x_3);
lean_dec(x_2);
return x_20;
}
}
}
lean_object* l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_PersistentHashMap_findAtAux___main___at_Lean_Elab_elabCommand___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_PersistentHashMap_findAux___main___at_Lean_Elab_elabCommand___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_PersistentHashMap_find___at_Lean_Elab_elabCommand___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_AssocList_find___main___at_Lean_Elab_elabCommand___spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_HashMapImp_find___at_Lean_Elab_elabCommand___spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_SMap_find___at_Lean_Elab_elabCommand___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_getElabContext(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_getElabContext___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_getElabContext(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_runElab___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Lean_Elab_getElabContext(x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_apply_2(x_1, x_6, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_5, 0, x_11);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_5, 0, x_16);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_18);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_apply_2(x_1, x_6, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_21);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_22, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_30 = x_22;
} else {
 lean_dec_ref(x_22);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_21);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(1, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_runElab(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_runElab___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_runElab___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runElab___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Lean_Elab_getElabContext(x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = l_Lean_Elab_elabCommand(x_1, x_6, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_5, 0, x_11);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_5, 0, x_16);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_18);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = l_Lean_Elab_elabCommand(x_1, x_6, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_21);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_22, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_30 = x_22;
} else {
 lean_dec_ref(x_22);
 x_30 = lean_box(0);
}
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_21);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(1, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_28);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_elabCommandAtFrontend(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_elabCommandAtFrontend___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_elabCommandAtFrontend(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_updateCmdPos___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_3, 2);
lean_dec(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_ctor_set(x_3, 2, x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 3);
x_14 = lean_ctor_get(x_3, 4);
x_15 = lean_ctor_get(x_3, 5);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
x_17 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_12);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_17, 3, x_13);
lean_ctor_set(x_17, 4, x_14);
lean_ctor_set(x_17, 5, x_15);
lean_ctor_set(x_1, 0, x_17);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_1);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_1, 0);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_1);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 3);
lean_inc(x_24);
x_25 = lean_ctor_get(x_20, 4);
lean_inc(x_25);
x_26 = lean_ctor_get(x_20, 5);
lean_inc(x_26);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 x_27 = x_20;
} else {
 lean_dec_ref(x_20);
 x_27 = lean_box(0);
}
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
if (lean_is_scalar(x_27)) {
 x_29 = lean_alloc_ctor(0, 6, 0);
} else {
 x_29 = x_27;
}
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_28);
lean_ctor_set(x_29, 3, x_24);
lean_ctor_set(x_29, 4, x_25);
lean_ctor_set(x_29, 5, x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_21);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
lean_object* l_Lean_Elab_updateCmdPos(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_updateCmdPos___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_updateCmdPos___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_updateCmdPos(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = l_Lean_Elab_getElabContext(x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = l_Lean_Elab_logElabException(x_1, x_6, x_8);
lean_dec(x_6);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 1);
lean_ctor_set(x_5, 0, x_11);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_9);
lean_ctor_set(x_5, 0, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = l_Lean_Elab_logElabException(x_1, x_6, x_15);
lean_dec(x_6);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 lean_ctor_release(x_17, 1);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_16);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_processCommand(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Elab_updateCmdPos___rarg(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
lean_dec(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_1);
lean_inc(x_10);
x_12 = l_Lean_Parser_parseCommand___main(x_10, x_1, x_8, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Parser_isEOI(x_14);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Parser_isExitCommand(x_14);
if (x_19 == 0)
{
lean_object* x_20; 
lean_free_object(x_3);
x_20 = l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(x_14, x_1, x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = 0;
x_24 = lean_box(x_23);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = 0;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(x_29, x_1, x_30);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
x_34 = 0;
x_35 = lean_box(x_34);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = 0;
x_38 = lean_box(x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
}
else
{
uint8_t x_40; lean_object* x_41; 
lean_dec(x_14);
lean_dec(x_1);
x_40 = 1;
x_41 = lean_box(x_40);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_3, 0, x_41);
return x_3;
}
}
else
{
uint8_t x_42; lean_object* x_43; 
lean_dec(x_14);
lean_dec(x_1);
x_42 = 1;
x_43 = lean_box(x_42);
lean_ctor_set(x_3, 1, x_17);
lean_ctor_set(x_3, 0, x_43);
return x_3;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_44 = lean_ctor_get(x_7, 0);
x_45 = lean_ctor_get(x_7, 1);
x_46 = lean_ctor_get(x_7, 2);
x_47 = lean_ctor_get(x_7, 3);
x_48 = lean_ctor_get(x_7, 4);
x_49 = lean_ctor_get(x_7, 5);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_7);
lean_inc(x_1);
lean_inc(x_44);
x_50 = l_Lean_Parser_parseCommand___main(x_44, x_1, x_8, x_45);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_55, 0, x_44);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_55, 2, x_46);
lean_ctor_set(x_55, 3, x_47);
lean_ctor_set(x_55, 4, x_48);
lean_ctor_set(x_55, 5, x_49);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
x_57 = l_Lean_Parser_isEOI(x_52);
if (x_57 == 0)
{
uint8_t x_58; 
x_58 = l_Lean_Parser_isExitCommand(x_52);
if (x_58 == 0)
{
lean_object* x_59; 
lean_free_object(x_3);
x_59 = l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(x_52, x_1, x_56);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_1);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
x_62 = 0;
x_63 = lean_box(x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
lean_dec(x_59);
x_67 = l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(x_65, x_1, x_66);
lean_dec(x_1);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_69 = x_67;
} else {
 lean_dec_ref(x_67);
 x_69 = lean_box(0);
}
x_70 = 0;
x_71 = lean_box(x_70);
if (lean_is_scalar(x_69)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_69;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_68);
return x_72;
}
}
else
{
uint8_t x_73; lean_object* x_74; 
lean_dec(x_52);
lean_dec(x_1);
x_73 = 1;
x_74 = lean_box(x_73);
lean_ctor_set(x_3, 1, x_56);
lean_ctor_set(x_3, 0, x_74);
return x_3;
}
}
else
{
uint8_t x_75; lean_object* x_76; 
lean_dec(x_52);
lean_dec(x_1);
x_75 = 1;
x_76 = lean_box(x_75);
lean_ctor_set(x_3, 1, x_56);
lean_ctor_set(x_3, 0, x_76);
return x_3;
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_77 = lean_ctor_get(x_3, 1);
lean_inc(x_77);
lean_dec(x_3);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_78, 2);
lean_inc(x_82);
x_83 = lean_ctor_get(x_78, 3);
lean_inc(x_83);
x_84 = lean_ctor_get(x_78, 4);
lean_inc(x_84);
x_85 = lean_ctor_get(x_78, 5);
lean_inc(x_85);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 lean_ctor_release(x_78, 2);
 lean_ctor_release(x_78, 3);
 lean_ctor_release(x_78, 4);
 lean_ctor_release(x_78, 5);
 x_86 = x_78;
} else {
 lean_dec_ref(x_78);
 x_86 = lean_box(0);
}
lean_inc(x_1);
lean_inc(x_80);
x_87 = l_Lean_Parser_parseCommand___main(x_80, x_1, x_79, x_81);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 0);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_ctor_get(x_88, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_dec(x_88);
if (lean_is_scalar(x_86)) {
 x_92 = lean_alloc_ctor(0, 6, 0);
} else {
 x_92 = x_86;
}
lean_ctor_set(x_92, 0, x_80);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_92, 2, x_82);
lean_ctor_set(x_92, 3, x_83);
lean_ctor_set(x_92, 4, x_84);
lean_ctor_set(x_92, 5, x_85);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_90);
x_94 = l_Lean_Parser_isEOI(x_89);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = l_Lean_Parser_isExitCommand(x_89);
if (x_95 == 0)
{
lean_object* x_96; 
x_96 = l_Lean_Elab_runElab___at_Lean_Elab_elabCommandAtFrontend___spec__1(x_89, x_1, x_93);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; uint8_t x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_1);
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_98 = x_96;
} else {
 lean_dec_ref(x_96);
 x_98 = lean_box(0);
}
x_99 = 0;
x_100 = lean_box(x_99);
if (lean_is_scalar(x_98)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_98;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_97);
return x_101;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; 
x_102 = lean_ctor_get(x_96, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_96, 1);
lean_inc(x_103);
lean_dec(x_96);
x_104 = l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(x_102, x_1, x_103);
lean_dec(x_1);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_106 = x_104;
} else {
 lean_dec_ref(x_104);
 x_106 = lean_box(0);
}
x_107 = 0;
x_108 = lean_box(x_107);
if (lean_is_scalar(x_106)) {
 x_109 = lean_alloc_ctor(0, 2, 0);
} else {
 x_109 = x_106;
}
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_105);
return x_109;
}
}
else
{
uint8_t x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_89);
lean_dec(x_1);
x_110 = 1;
x_111 = lean_box(x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_93);
return x_112;
}
}
else
{
uint8_t x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_89);
lean_dec(x_1);
x_113 = 1;
x_114 = lean_box(x_113);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_93);
return x_115;
}
}
}
}
lean_object* l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runElab___at_Lean_Elab_processCommand___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_processCommandsAux___main___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
x_3 = l_Lean_Elab_processCommand(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_2 = x_6;
goto _start;
}
else
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_3, 0);
lean_dec(x_9);
x_10 = lean_box(0);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_processCommandsAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_processCommandsAux___main___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_processCommandsAux___main___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_processCommandsAux___main(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_processCommandsAux___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_processCommandsAux___main___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_processCommandsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_processCommandsAux___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_processCommandsAux___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_processCommandsAux(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_processCommands(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_processCommandsAux___main___rarg(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_absolutizeModuleName___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of relative import, file name of main file is not available");
return x_1;
}
}
lean_object* lean_absolutize_module_name(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
else
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = l_Lean_Elab_absolutizeModuleName___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_addRel___main(x_9, x_8);
lean_dec(x_8);
lean_dec(x_9);
x_11 = l___private_Init_Lean_Path_1__pathSep___closed__1;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Lean_modNameToFileName___main(x_2);
lean_dec(x_2);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_Array_findMAux___main___at_Lean_findFile___spec__2___closed__1;
x_16 = lean_string_append(x_14, x_15);
x_17 = l_Lean_findOLean___closed__1;
x_18 = lean_string_append(x_16, x_17);
x_19 = lean_module_name_of_file(x_18, x_4);
return x_19;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_nat_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_array_fget(x_4, x_5);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = l_Lean_Syntax_asNode___rarg(x_11);
lean_dec(x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_17 = lean_array_get(x_2, x_15, x_16);
x_18 = l_Lean_Syntax_isNone___rarg(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = l_Lean_Syntax_getNumArgs___rarg(x_17);
lean_dec(x_17);
x_20 = lean_nat_sub(x_19, x_12);
lean_dec(x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_inc(x_2);
x_22 = lean_array_get(x_2, x_15, x_12);
lean_dec(x_15);
x_23 = l_Lean_Syntax_getId___rarg(x_22);
lean_dec(x_22);
lean_inc(x_1);
x_24 = lean_absolutize_module_name(x_1, x_23, x_21, x_7);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_6);
x_5 = x_13;
x_6 = x_27;
x_7 = x_26;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_24);
if (x_29 == 0)
{
return x_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_24, 0);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_24);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_17);
x_33 = lean_box(0);
lean_inc(x_2);
x_34 = lean_array_get(x_2, x_15, x_12);
lean_dec(x_15);
x_35 = l_Lean_Syntax_getId___rarg(x_34);
lean_dec(x_34);
lean_inc(x_1);
x_36 = lean_absolutize_module_name(x_1, x_35, x_33, x_7);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_6);
x_5 = x_13;
x_6 = x_39;
x_7 = x_38;
goto _start;
}
else
{
uint8_t x_41; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_36);
if (x_41 == 0)
{
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 0);
x_43 = lean_ctor_get(x_36, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_36);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_nat_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_array_fget(x_4, x_5);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_14 = l_Lean_Syntax_getArg___rarg(x_11, x_12);
x_15 = l_Lean_Syntax_getArgs___rarg(x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1(x_1, x_3, x_11, x_15, x_16, x_6, x_7);
lean_dec(x_15);
lean_dec(x_11);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_5 = x_13;
x_6 = x_18;
x_7 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_processHeaderAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("default");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_processHeaderAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkInitAttr___closed__2;
x_2 = l_Lean_Elab_processHeaderAux___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_processHeaderAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_processHeaderAux___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_processHeaderAux(lean_object* x_1, lean_object* x_2, uint32_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_5 = l_Lean_Syntax_asNode___rarg(x_2);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
x_24 = lean_box(0);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_array_get(x_24, x_23, x_25);
lean_dec(x_23);
x_27 = l_Lean_Syntax_isNone___rarg(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_box(0);
x_6 = x_28;
goto block_22;
}
else
{
lean_object* x_29; 
x_29 = l_Lean_Elab_processHeaderAux___closed__3;
x_6 = x_29;
goto block_22;
}
block_22:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_array_get(x_8, x_7, x_9);
x_11 = l_Lean_Syntax_getArgs___rarg(x_10);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2(x_1, x_7, x_8, x_11, x_12, x_6, x_4);
lean_dec(x_11);
lean_dec(x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_List_reverse___rarg(x_14);
x_17 = lean_import_modules(x_16, x_3, x_15);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_iterateMAux___main___at_Lean_Elab_processHeaderAux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_processHeaderAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_6 = l_Lean_Elab_processHeaderAux(x_1, x_2, x_5, x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_processHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint32_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_processHeaderAux(x_1, x_2, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint32_t x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = 0;
x_18 = lean_mk_empty_environment(x_17, x_16);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = l_Lean_Syntax_getPos___rarg(x_2);
x_22 = lean_ctor_get(x_4, 2);
x_23 = lean_ctor_get(x_4, 1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_15);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Lean_FileMap_toPosition(x_22, x_27);
x_29 = 2;
x_30 = l_String_splitAux___main___closed__1;
lean_inc(x_23);
x_31 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_28);
lean_ctor_set(x_31, 2, x_24);
lean_ctor_set(x_31, 3, x_30);
lean_ctor_set(x_31, 4, x_26);
lean_ctor_set_uint8(x_31, sizeof(void*)*5, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_3);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_20);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_18, 0, x_33);
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_21, 0);
lean_inc(x_34);
lean_dec(x_21);
x_35 = l_Lean_FileMap_toPosition(x_22, x_34);
lean_dec(x_34);
x_36 = 2;
x_37 = l_String_splitAux___main___closed__1;
lean_inc(x_23);
x_38 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_35);
lean_ctor_set(x_38, 2, x_24);
lean_ctor_set(x_38, 3, x_37);
lean_ctor_set(x_38, 4, x_26);
lean_ctor_set_uint8(x_38, sizeof(void*)*5, x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_3);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_20);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_18, 0, x_40);
return x_18;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_18, 0);
x_42 = lean_ctor_get(x_18, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_18);
x_43 = l_Lean_Syntax_getPos___rarg(x_2);
x_44 = lean_ctor_get(x_4, 2);
x_45 = lean_ctor_get(x_4, 1);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_15);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Lean_FileMap_toPosition(x_44, x_49);
x_51 = 2;
x_52 = l_String_splitAux___main___closed__1;
lean_inc(x_45);
x_53 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_53, 0, x_45);
lean_ctor_set(x_53, 1, x_50);
lean_ctor_set(x_53, 2, x_46);
lean_ctor_set(x_53, 3, x_52);
lean_ctor_set(x_53, 4, x_48);
lean_ctor_set_uint8(x_53, sizeof(void*)*5, x_51);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_3);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_42);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_57 = lean_ctor_get(x_43, 0);
lean_inc(x_57);
lean_dec(x_43);
x_58 = l_Lean_FileMap_toPosition(x_44, x_57);
lean_dec(x_57);
x_59 = 2;
x_60 = l_String_splitAux___main___closed__1;
lean_inc(x_45);
x_61 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_61, 0, x_45);
lean_ctor_set(x_61, 1, x_58);
lean_ctor_set(x_61, 2, x_46);
lean_ctor_set(x_61, 3, x_60);
lean_ctor_set(x_61, 4, x_48);
lean_ctor_set_uint8(x_61, sizeof(void*)*5, x_59);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_3);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_41);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_42);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_15);
lean_dec(x_3);
x_65 = !lean_is_exclusive(x_18);
if (x_65 == 0)
{
return x_18;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_18, 0);
x_67 = lean_ctor_get(x_18, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_18);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
}
lean_object* l_Lean_Elab_processHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint32_t x_7; lean_object* x_8; 
x_7 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_8 = l_Lean_Elab_processHeader(x_1, x_2, x_3, x_4, x_7, x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Elab_toBaseDir(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_io_realpath(x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_System_FilePath_dirName(x_8);
lean_ctor_set(x_1, 0, x_9);
lean_ctor_set(x_6, 0, x_1);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
x_12 = l_System_FilePath_dirName(x_10);
lean_ctor_set(x_1, 0, x_12);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_free_object(x_1);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_io_realpath(x_18, x_2);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_22 = x_19;
} else {
 lean_dec_ref(x_19);
 x_22 = lean_box(0);
}
x_23 = l_System_FilePath_dirName(x_20);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
if (lean_is_scalar(x_22)) {
 x_25 = lean_alloc_ctor(0, 2, 0);
} else {
 x_25 = x_22;
}
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_28 = x_19;
} else {
 lean_dec_ref(x_19);
 x_28 = lean_box(0);
}
if (lean_is_scalar(x_28)) {
 x_29 = lean_alloc_ctor(1, 2, 0);
} else {
 x_29 = x_28;
}
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
}
}
lean_object* _init_l_Lean_Elab_testFrontend___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("root");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_testFrontend___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_testFrontend___closed__1;
x_3 = lean_box(0);
x_4 = l_Lean_Options_empty;
x_5 = l_Lean_LocalContext_Inhabited___closed__1;
x_6 = lean_unsigned_to_nat(1u);
x_7 = 0;
x_8 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_3);
lean_ctor_set(x_8, 4, x_1);
lean_ctor_set(x_8, 5, x_1);
lean_ctor_set(x_8, 6, x_5);
lean_ctor_set(x_8, 7, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*8, x_7);
return x_8;
}
}
lean_object* _init_l_Lean_Elab_testFrontend___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_testFrontend___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_testFrontend___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("<input>");
return x_1;
}
}
lean_object* l_Lean_Elab_testFrontend(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = lean_mk_empty_environment(x_4, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
lean_inc(x_2);
x_8 = l_Lean_Elab_toBaseDir(x_2, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_63; 
x_63 = l_Lean_Elab_testFrontend___closed__4;
x_11 = x_63;
goto block_62;
}
else
{
lean_object* x_64; 
x_64 = lean_ctor_get(x_2, 0);
lean_inc(x_64);
lean_dec(x_2);
x_11 = x_64;
goto block_62;
}
block_62:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = l_Lean_Parser_mkParserContextCore(x_6, x_1, x_11);
lean_inc(x_12);
x_13 = l_Lean_Parser_parseHeader(x_6, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Elab_processHeader(x_9, x_15, x_17, x_12, x_4, x_10);
lean_dec(x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = lean_ctor_get(x_19, 1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_NameGenerator_Inhabited___closed__3;
x_26 = l_Lean_MetavarContext_Inhabited___closed__1;
x_27 = l_Lean_Elab_testFrontend___closed__3;
x_28 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_23);
lean_ctor_set(x_28, 2, x_24);
lean_ctor_set(x_28, 3, x_25);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set(x_28, 5, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_16);
x_30 = l_Lean_Elab_processCommandsAux___main___rarg(x_12, x_29);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_30, 1);
x_33 = lean_ctor_get(x_30, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
lean_ctor_set(x_19, 1, x_36);
lean_ctor_set(x_19, 0, x_35);
lean_ctor_set(x_30, 1, x_20);
lean_ctor_set(x_30, 0, x_19);
return x_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_dec(x_30);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
lean_ctor_set(x_19, 1, x_40);
lean_ctor_set(x_19, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_19);
lean_ctor_set(x_41, 1, x_20);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_42 = lean_ctor_get(x_19, 0);
x_43 = lean_ctor_get(x_19, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_19);
x_44 = lean_unsigned_to_nat(0u);
x_45 = l_Lean_NameGenerator_Inhabited___closed__3;
x_46 = l_Lean_MetavarContext_Inhabited___closed__1;
x_47 = l_Lean_Elab_testFrontend___closed__3;
x_48 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_43);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_48, 3, x_45);
lean_ctor_set(x_48, 4, x_46);
lean_ctor_set(x_48, 5, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_16);
x_50 = l_Lean_Elab_processCommandsAux___main___rarg(x_12, x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_52 = x_50;
} else {
 lean_dec_ref(x_50);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
if (lean_is_scalar(x_52)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_52;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_20);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_16);
lean_dec(x_12);
x_58 = !lean_is_exclusive(x_18);
if (x_58 == 0)
{
return x_18;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_18, 0);
x_60 = lean_ctor_get(x_18, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_18);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_8);
if (x_65 == 0)
{
return x_8;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_8, 0);
x_67 = lean_ctor_get(x_8, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_8);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_5);
if (x_69 == 0)
{
return x_5;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_5, 0);
x_71 = lean_ctor_get(x_5, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_5);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
lean_object* l_Lean_Elab_Inhabited___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_ElabException_Inhabited___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Inhabited(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Inhabited___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Inhabited___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Inhabited(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_mkFreshName___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_name_mk_numeral(x_5, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_11);
x_13 = lean_name_mk_numeral(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_1, 3, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_1);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_18 = lean_ctor_get(x_1, 3);
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_1, 2);
x_22 = lean_ctor_get(x_1, 4);
x_23 = lean_ctor_get(x_1, 5);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_18);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_26 = x_18;
} else {
 lean_dec_ref(x_18);
 x_26 = lean_box(0);
}
lean_inc(x_25);
lean_inc(x_24);
x_27 = lean_name_mk_numeral(x_24, x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_25, x_28);
lean_dec(x_25);
if (lean_is_scalar(x_26)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_26;
}
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_31, 0, x_19);
lean_ctor_set(x_31, 1, x_20);
lean_ctor_set(x_31, 2, x_21);
lean_ctor_set(x_31, 3, x_30);
lean_ctor_set(x_31, 4, x_22);
lean_ctor_set(x_31, 5, x_23);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
lean_object* l_Lean_Elab_mkFreshName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkFreshName___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkFreshName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_mkFreshName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_panicWithPos___at_Lean_Elab_getScope___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_5 = l_panicWithPos___rarg___closed__1;
x_6 = lean_string_append(x_5, x_1);
x_7 = l_panicWithPos___rarg___closed__2;
x_8 = lean_string_append(x_6, x_7);
x_9 = l_Nat_repr(x_2);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = l_panicWithPos___rarg___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Nat_repr(x_3);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = l_panicWithPos___rarg___closed__3;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_string_append(x_16, x_4);
x_18 = l_Lean_ElabScope_Inhabited;
x_19 = lean_panic_fn(x_17);
return x_19;
}
}
lean_object* l_List_head_x21___at_Lean_Elab_getScope___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_List_get_x21___main___rarg___closed__1;
x_3 = lean_unsigned_to_nat(32u);
x_4 = lean_unsigned_to_nat(10u);
x_5 = l_List_head_x21___rarg___closed__1;
x_6 = l_panicWithPos___at_Lean_Elab_getScope___spec__2(x_2, x_3, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
return x_7;
}
}
}
lean_object* l_Lean_Elab_getScope___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
x_3 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_2);
lean_dec(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_getScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getScope___rarg), 1, 0);
return x_2;
}
}
lean_object* l_panicWithPos___at_Lean_Elab_getScope___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_panicWithPos___at_Lean_Elab_getScope___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_List_head_x21___at_Lean_Elab_getScope___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getScope___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_getScope(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getOpenDecls___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_getScope___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 4);
lean_inc(x_5);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_ctor_get(x_6, 4);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
}
lean_object* l_Lean_Elab_getOpenDecls(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getOpenDecls___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getOpenDecls___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_getOpenDecls(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getUniverses___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_getScope___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 5);
lean_inc(x_5);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_ctor_get(x_6, 5);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
}
lean_object* l_Lean_Elab_getUniverses(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getUniverses___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getUniverses___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_getUniverses(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_getNamespace___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
return x_7;
}
}
}
lean_object* l_Lean_Elab_getNamespace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_getNamespace___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_getNamespace___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_getNamespace(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_modifyScope(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 5);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 5);
lean_dec(x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_3, 2);
x_12 = lean_ctor_get(x_3, 3);
x_13 = lean_ctor_get(x_3, 4);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_11);
lean_ctor_set(x_14, 3, x_12);
lean_ctor_set(x_14, 4, x_13);
lean_ctor_set(x_14, 5, x_4);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_3);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_3, 5);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_4);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_apply_1(x_1, x_20);
lean_ctor_set(x_4, 0, x_21);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_ctor_get(x_4, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_4);
x_26 = lean_apply_1(x_1, x_24);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_3, 5, x_27);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_3);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_30 = lean_ctor_get(x_3, 0);
x_31 = lean_ctor_get(x_3, 1);
x_32 = lean_ctor_get(x_3, 2);
x_33 = lean_ctor_get(x_3, 3);
x_34 = lean_ctor_get(x_3, 4);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_3);
x_35 = lean_ctor_get(x_4, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_4, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_37 = x_4;
} else {
 lean_dec_ref(x_4);
 x_37 = lean_box(0);
}
x_38 = lean_apply_1(x_1, x_35);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(1, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
x_40 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_31);
lean_ctor_set(x_40, 2, x_32);
lean_ctor_set(x_40, 3, x_33);
lean_ctor_set(x_40, 4, x_34);
lean_ctor_set(x_40, 5, x_39);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
}
lean_object* l_Lean_Elab_modifyScope___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_modifyScope(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_modifyGetScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 5);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_4, 5);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_apply_1(x_2, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_ctor_set(x_5, 0, x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_apply_1(x_2, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_4, 5, x_20);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_4);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
x_24 = lean_ctor_get(x_4, 2);
x_25 = lean_ctor_get(x_4, 3);
x_26 = lean_ctor_get(x_4, 4);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
x_27 = lean_ctor_get(x_5, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_29 = x_5;
} else {
 lean_dec_ref(x_5);
 x_29 = lean_box(0);
}
x_30 = lean_apply_1(x_2, x_27);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
if (lean_is_scalar(x_29)) {
 x_33 = lean_alloc_ctor(1, 2, 0);
} else {
 x_33 = x_29;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
x_34 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_23);
lean_ctor_set(x_34, 2, x_24);
lean_ctor_set(x_34, 3, x_25);
lean_ctor_set(x_34, 4, x_26);
lean_ctor_set(x_34, 5, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_31);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Elab_modifyGetScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_modifyGetScope___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_modifyGetScope___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_modifyGetScope___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_localContext___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_getScope___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_4, 6);
lean_inc(x_5);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_2);
x_8 = lean_ctor_get(x_6, 6);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
}
lean_object* l_Lean_Elab_localContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_localContext___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_localContext___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_localContext(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 5);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 5);
lean_dec(x_9);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
x_14 = lean_ctor_get(x_6, 2);
x_15 = lean_ctor_get(x_6, 3);
x_16 = lean_ctor_get(x_6, 4);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_17 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_14);
lean_ctor_set(x_17, 3, x_15);
lean_ctor_set(x_17, 4, x_16);
lean_ctor_set(x_17, 5, x_7);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_7, 0);
lean_inc(x_20);
x_21 = !lean_is_exclusive(x_6);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_6, 5);
lean_dec(x_22);
x_23 = !lean_is_exclusive(x_7);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_7, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_20);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_20, 6);
x_27 = lean_local_ctx_mk_local_decl(x_26, x_4, x_1, x_2, x_3);
lean_ctor_set(x_20, 6, x_27);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
x_32 = lean_ctor_get(x_20, 2);
x_33 = lean_ctor_get(x_20, 3);
x_34 = lean_ctor_get(x_20, 4);
x_35 = lean_ctor_get(x_20, 5);
x_36 = lean_ctor_get(x_20, 6);
x_37 = lean_ctor_get(x_20, 7);
x_38 = lean_ctor_get_uint8(x_20, sizeof(void*)*8);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_39 = lean_local_ctx_mk_local_decl(x_36, x_4, x_1, x_2, x_3);
x_40 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_40, 0, x_30);
lean_ctor_set(x_40, 1, x_31);
lean_ctor_set(x_40, 2, x_32);
lean_ctor_set(x_40, 3, x_33);
lean_ctor_set(x_40, 4, x_34);
lean_ctor_set(x_40, 5, x_35);
lean_ctor_set(x_40, 6, x_39);
lean_ctor_set(x_40, 7, x_37);
lean_ctor_set_uint8(x_40, sizeof(void*)*8, x_38);
lean_ctor_set(x_7, 0, x_40);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_43 = lean_ctor_get(x_7, 1);
lean_inc(x_43);
lean_dec(x_7);
x_44 = lean_ctor_get(x_20, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_20, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_20, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_20, 3);
lean_inc(x_47);
x_48 = lean_ctor_get(x_20, 4);
lean_inc(x_48);
x_49 = lean_ctor_get(x_20, 5);
lean_inc(x_49);
x_50 = lean_ctor_get(x_20, 6);
lean_inc(x_50);
x_51 = lean_ctor_get(x_20, 7);
lean_inc(x_51);
x_52 = lean_ctor_get_uint8(x_20, sizeof(void*)*8);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 lean_ctor_release(x_20, 6);
 lean_ctor_release(x_20, 7);
 x_53 = x_20;
} else {
 lean_dec_ref(x_20);
 x_53 = lean_box(0);
}
x_54 = lean_local_ctx_mk_local_decl(x_50, x_4, x_1, x_2, x_3);
if (lean_is_scalar(x_53)) {
 x_55 = lean_alloc_ctor(0, 8, 1);
} else {
 x_55 = x_53;
}
lean_ctor_set(x_55, 0, x_44);
lean_ctor_set(x_55, 1, x_45);
lean_ctor_set(x_55, 2, x_46);
lean_ctor_set(x_55, 3, x_47);
lean_ctor_set(x_55, 4, x_48);
lean_ctor_set(x_55, 5, x_49);
lean_ctor_set(x_55, 6, x_54);
lean_ctor_set(x_55, 7, x_51);
lean_ctor_set_uint8(x_55, sizeof(void*)*8, x_52);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_43);
lean_ctor_set(x_6, 5, x_56);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_6);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_59 = lean_ctor_get(x_6, 0);
x_60 = lean_ctor_get(x_6, 1);
x_61 = lean_ctor_get(x_6, 2);
x_62 = lean_ctor_get(x_6, 3);
x_63 = lean_ctor_get(x_6, 4);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_6);
x_64 = lean_ctor_get(x_7, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_65 = x_7;
} else {
 lean_dec_ref(x_7);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_20, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_20, 1);
lean_inc(x_67);
x_68 = lean_ctor_get(x_20, 2);
lean_inc(x_68);
x_69 = lean_ctor_get(x_20, 3);
lean_inc(x_69);
x_70 = lean_ctor_get(x_20, 4);
lean_inc(x_70);
x_71 = lean_ctor_get(x_20, 5);
lean_inc(x_71);
x_72 = lean_ctor_get(x_20, 6);
lean_inc(x_72);
x_73 = lean_ctor_get(x_20, 7);
lean_inc(x_73);
x_74 = lean_ctor_get_uint8(x_20, sizeof(void*)*8);
if (lean_is_exclusive(x_20)) {
 lean_ctor_release(x_20, 0);
 lean_ctor_release(x_20, 1);
 lean_ctor_release(x_20, 2);
 lean_ctor_release(x_20, 3);
 lean_ctor_release(x_20, 4);
 lean_ctor_release(x_20, 5);
 lean_ctor_release(x_20, 6);
 lean_ctor_release(x_20, 7);
 x_75 = x_20;
} else {
 lean_dec_ref(x_20);
 x_75 = lean_box(0);
}
x_76 = lean_local_ctx_mk_local_decl(x_72, x_4, x_1, x_2, x_3);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 8, 1);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_66);
lean_ctor_set(x_77, 1, x_67);
lean_ctor_set(x_77, 2, x_68);
lean_ctor_set(x_77, 3, x_69);
lean_ctor_set(x_77, 4, x_70);
lean_ctor_set(x_77, 5, x_71);
lean_ctor_set(x_77, 6, x_76);
lean_ctor_set(x_77, 7, x_73);
lean_ctor_set_uint8(x_77, sizeof(void*)*8, x_74);
if (lean_is_scalar(x_65)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_65;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_64);
x_79 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_79, 0, x_59);
lean_ctor_set(x_79, 1, x_60);
lean_ctor_set(x_79, 2, x_61);
lean_ctor_set(x_79, 3, x_62);
lean_ctor_set(x_79, 4, x_63);
lean_ctor_set(x_79, 5, x_78);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
}
lean_object* l_Lean_Elab_mkLocalDecl(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_mkFreshName___rarg(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_7);
x_9 = l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1(x_1, x_2, x_3, x_7, x_4, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = lean_expr_mk_fvar(x_7);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_expr_mk_fvar(x_7);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Elab_modifyScope___at_Lean_Elab_mkLocalDecl___spec__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_Lean_Elab_mkLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_Elab_mkLocalDecl(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_Elab_mkLambda(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_localContext___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_LocalContext_mkLambda(x_7, x_1, x_2);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = l_Lean_LocalContext_mkLambda(x_9, x_1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
lean_object* l_Lean_Elab_mkLambda___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_mkLambda(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_mkForall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_localContext___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_LocalContext_mkForall(x_7, x_1, x_2);
lean_ctor_set(x_5, 0, x_8);
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_5, 0);
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_5);
x_11 = l_Lean_LocalContext_mkForall(x_9, x_1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
lean_object* l_Lean_Elab_mkForall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_mkForall(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l_Lean_Elab_anonymousInstNamePrefix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_inst");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_anonymousInstNamePrefix___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_anonymousInstNamePrefix___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_anonymousInstNamePrefix() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_anonymousInstNamePrefix___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 5);
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_10);
lean_ctor_set(x_12, 4, x_11);
lean_ctor_set(x_12, 5, x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_1, 5);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_2, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_15, 7);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_21, x_22);
lean_dec(x_21);
lean_ctor_set(x_15, 7, x_23);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_1);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_26 = lean_ctor_get(x_15, 0);
x_27 = lean_ctor_get(x_15, 1);
x_28 = lean_ctor_get(x_15, 2);
x_29 = lean_ctor_get(x_15, 3);
x_30 = lean_ctor_get(x_15, 4);
x_31 = lean_ctor_get(x_15, 5);
x_32 = lean_ctor_get(x_15, 6);
x_33 = lean_ctor_get(x_15, 7);
x_34 = lean_ctor_get_uint8(x_15, sizeof(void*)*8);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_15);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_nat_add(x_33, x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_37, 0, x_26);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_28);
lean_ctor_set(x_37, 3, x_29);
lean_ctor_set(x_37, 4, x_30);
lean_ctor_set(x_37, 5, x_31);
lean_ctor_set(x_37, 6, x_32);
lean_ctor_set(x_37, 7, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*8, x_34);
lean_ctor_set(x_2, 0, x_37);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_1);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
lean_dec(x_2);
x_41 = lean_ctor_get(x_15, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_15, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_15, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_15, 4);
lean_inc(x_45);
x_46 = lean_ctor_get(x_15, 5);
lean_inc(x_46);
x_47 = lean_ctor_get(x_15, 6);
lean_inc(x_47);
x_48 = lean_ctor_get(x_15, 7);
lean_inc(x_48);
x_49 = lean_ctor_get_uint8(x_15, sizeof(void*)*8);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 lean_ctor_release(x_15, 2);
 lean_ctor_release(x_15, 3);
 lean_ctor_release(x_15, 4);
 lean_ctor_release(x_15, 5);
 lean_ctor_release(x_15, 6);
 lean_ctor_release(x_15, 7);
 x_50 = x_15;
} else {
 lean_dec_ref(x_15);
 x_50 = lean_box(0);
}
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_add(x_48, x_51);
lean_dec(x_48);
if (lean_is_scalar(x_50)) {
 x_53 = lean_alloc_ctor(0, 8, 1);
} else {
 x_53 = x_50;
}
lean_ctor_set(x_53, 0, x_41);
lean_ctor_set(x_53, 1, x_42);
lean_ctor_set(x_53, 2, x_43);
lean_ctor_set(x_53, 3, x_44);
lean_ctor_set(x_53, 4, x_45);
lean_ctor_set(x_53, 5, x_46);
lean_ctor_set(x_53, 6, x_47);
lean_ctor_set(x_53, 7, x_52);
lean_ctor_set_uint8(x_53, sizeof(void*)*8, x_49);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_40);
lean_ctor_set(x_1, 5, x_54);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_1);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get(x_1, 1);
x_59 = lean_ctor_get(x_1, 2);
x_60 = lean_ctor_get(x_1, 3);
x_61 = lean_ctor_get(x_1, 4);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_1);
x_62 = lean_ctor_get(x_2, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_63 = x_2;
} else {
 lean_dec_ref(x_2);
 x_63 = lean_box(0);
}
x_64 = lean_ctor_get(x_15, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_15, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_15, 2);
lean_inc(x_66);
x_67 = lean_ctor_get(x_15, 3);
lean_inc(x_67);
x_68 = lean_ctor_get(x_15, 4);
lean_inc(x_68);
x_69 = lean_ctor_get(x_15, 5);
lean_inc(x_69);
x_70 = lean_ctor_get(x_15, 6);
lean_inc(x_70);
x_71 = lean_ctor_get(x_15, 7);
lean_inc(x_71);
x_72 = lean_ctor_get_uint8(x_15, sizeof(void*)*8);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 lean_ctor_release(x_15, 2);
 lean_ctor_release(x_15, 3);
 lean_ctor_release(x_15, 4);
 lean_ctor_release(x_15, 5);
 lean_ctor_release(x_15, 6);
 lean_ctor_release(x_15, 7);
 x_73 = x_15;
} else {
 lean_dec_ref(x_15);
 x_73 = lean_box(0);
}
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_add(x_71, x_74);
lean_dec(x_71);
if (lean_is_scalar(x_73)) {
 x_76 = lean_alloc_ctor(0, 8, 1);
} else {
 x_76 = x_73;
}
lean_ctor_set(x_76, 0, x_64);
lean_ctor_set(x_76, 1, x_65);
lean_ctor_set(x_76, 2, x_66);
lean_ctor_set(x_76, 3, x_67);
lean_ctor_set(x_76, 4, x_68);
lean_ctor_set(x_76, 5, x_69);
lean_ctor_set(x_76, 6, x_70);
lean_ctor_set(x_76, 7, x_75);
lean_ctor_set_uint8(x_76, sizeof(void*)*8, x_72);
if (lean_is_scalar(x_63)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_63;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_62);
x_78 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_78, 0, x_57);
lean_ctor_set(x_78, 1, x_58);
lean_ctor_set(x_78, 2, x_59);
lean_ctor_set(x_78, 3, x_60);
lean_ctor_set(x_78, 4, x_61);
lean_ctor_set(x_78, 5, x_77);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkAnonymousInstName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_3 = l_Lean_Elab_getScope___rarg(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 7);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Elab_anonymousInstNamePrefix;
x_8 = l_Lean_Name_appendIndexAfter(x_7, x_6);
x_9 = l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___rarg(x_5);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_modifyScope___at_Lean_Elab_mkAnonymousInstName___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_mkAnonymousInstName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_mkAnonymousInstName(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_rootNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_root_");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_rootNamespace___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_rootNamespace___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_rootNamespace() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_rootNamespace___closed__2;
return x_1;
}
}
lean_object* l_Lean_Elab_removeRoot(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_rootNamespace;
x_3 = lean_box(0);
x_4 = l_Lean_Name_replacePrefix___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_5, 3);
lean_inc(x_2);
x_8 = l_Lean_Name_append___main(x_7, x_2);
x_9 = l_Lean_isNamespace(x_1, x_8);
if (x_9 == 0)
{
lean_dec(x_8);
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_8);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingScopes___main(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingScopes___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingScopes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingScopes(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_2);
x_9 = l_Lean_Name_append___main(x_8, x_2);
x_10 = l_Lean_isNamespace(x_1, x_9);
if (x_10 == 0)
{
lean_dec(x_9);
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_9);
return x_12;
}
}
else
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 1);
x_3 = x_13;
goto _start;
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_3, 1);
x_3 = x_15;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_resolveNamespaceUsingOpenDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespaceUsingOpenDecls(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* _init_l_Lean_Elab_resolveNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown namespace '");
return x_1;
}
}
lean_object* l_Lean_Elab_resolveNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Lean_isNamespace(x_4, x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 5);
lean_inc(x_6);
lean_inc(x_1);
x_7 = l_Lean_Elab_resolveNamespaceUsingScopes___main(x_4, x_1, x_6);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_getOpenDecls___rarg(x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_1);
x_11 = l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(x_4, x_1, x_10);
lean_dec(x_10);
lean_dec(x_4);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = l_System_FilePath_dirName___closed__1;
x_13 = l_Lean_Name_toStringWithSep___main(x_12, x_1);
x_14 = l_Lean_Elab_resolveNamespace___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Char_HasRepr___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_18);
return x_8;
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_19);
return x_8;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_8, 0);
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_8);
lean_inc(x_1);
x_22 = l_Lean_Elab_resolveNamespaceUsingOpenDecls___main(x_4, x_1, x_20);
lean_dec(x_20);
lean_dec(x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = l_System_FilePath_dirName___closed__1;
x_24 = l_Lean_Name_toStringWithSep___main(x_23, x_1);
x_25 = l_Lean_Elab_resolveNamespace___closed__1;
x_26 = lean_string_append(x_25, x_24);
lean_dec(x_24);
x_27 = l_Char_HasRepr___closed__1;
x_28 = lean_string_append(x_26, x_27);
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_21);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_31 = lean_ctor_get(x_22, 0);
lean_inc(x_31);
lean_dec(x_22);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_21);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_4);
lean_dec(x_1);
x_33 = lean_ctor_get(x_7, 0);
lean_inc(x_33);
lean_dec(x_7);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_3);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_4);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_3);
return x_35;
}
}
}
lean_object* l_Lean_Elab_resolveNamespace___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_resolveNamespace(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_withNewScope___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 5);
x_6 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_3, 5, x_7);
x_8 = lean_apply_2(x_1, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_8, 1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 5);
x_13 = l_List_tail_x21___rarg(x_12);
lean_dec(x_12);
lean_ctor_set(x_10, 5, x_13);
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
x_16 = lean_ctor_get(x_10, 2);
x_17 = lean_ctor_get(x_10, 3);
x_18 = lean_ctor_get(x_10, 4);
x_19 = lean_ctor_get(x_10, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_20 = l_List_tail_x21___rarg(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_17);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_20);
lean_ctor_set(x_8, 1, x_21);
return x_8;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_8, 1);
x_23 = lean_ctor_get(x_8, 0);
lean_inc(x_22);
lean_inc(x_23);
lean_dec(x_8);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 2);
lean_inc(x_26);
x_27 = lean_ctor_get(x_22, 3);
lean_inc(x_27);
x_28 = lean_ctor_get(x_22, 4);
lean_inc(x_28);
x_29 = lean_ctor_get(x_22, 5);
lean_inc(x_29);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 lean_ctor_release(x_22, 2);
 lean_ctor_release(x_22, 3);
 lean_ctor_release(x_22, 4);
 lean_ctor_release(x_22, 5);
 x_30 = x_22;
} else {
 lean_dec_ref(x_22);
 x_30 = lean_box(0);
}
x_31 = l_List_tail_x21___rarg(x_29);
lean_dec(x_29);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 6, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_24);
lean_ctor_set(x_32, 1, x_25);
lean_ctor_set(x_32, 2, x_26);
lean_ctor_set(x_32, 3, x_27);
lean_ctor_set(x_32, 4, x_28);
lean_ctor_set(x_32, 5, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_23);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_8);
if (x_34 == 0)
{
return x_8;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_8, 0);
x_36 = lean_ctor_get(x_8, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_8);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
x_40 = lean_ctor_get(x_3, 2);
x_41 = lean_ctor_get(x_3, 3);
x_42 = lean_ctor_get(x_3, 4);
x_43 = lean_ctor_get(x_3, 5);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_44 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_43);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_46, 0, x_38);
lean_ctor_set(x_46, 1, x_39);
lean_ctor_set(x_46, 2, x_40);
lean_ctor_set(x_46, 3, x_41);
lean_ctor_set(x_46, 4, x_42);
lean_ctor_set(x_46, 5, x_45);
x_47 = lean_apply_2(x_1, x_2, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_48, 2);
lean_inc(x_53);
x_54 = lean_ctor_get(x_48, 3);
lean_inc(x_54);
x_55 = lean_ctor_get(x_48, 4);
lean_inc(x_55);
x_56 = lean_ctor_get(x_48, 5);
lean_inc(x_56);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 lean_ctor_release(x_48, 2);
 lean_ctor_release(x_48, 3);
 lean_ctor_release(x_48, 4);
 lean_ctor_release(x_48, 5);
 x_57 = x_48;
} else {
 lean_dec_ref(x_48);
 x_57 = lean_box(0);
}
x_58 = l_List_tail_x21___rarg(x_56);
lean_dec(x_56);
if (lean_is_scalar(x_57)) {
 x_59 = lean_alloc_ctor(0, 6, 0);
} else {
 x_59 = x_57;
}
lean_ctor_set(x_59, 0, x_51);
lean_ctor_set(x_59, 1, x_52);
lean_ctor_set(x_59, 2, x_53);
lean_ctor_set(x_59, 3, x_54);
lean_ctor_set(x_59, 4, x_55);
lean_ctor_set(x_59, 5, x_58);
if (lean_is_scalar(x_50)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_50;
}
lean_ctor_set(x_60, 0, x_49);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_47, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_47, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_63 = x_47;
} else {
 lean_dec_ref(x_47);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(1, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
}
}
}
lean_object* l_Lean_Elab_withNewScope(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_withNewScope___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 5);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 5);
lean_dec(x_4);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_8);
lean_ctor_set(x_12, 2, x_9);
lean_ctor_set(x_12, 3, x_10);
lean_ctor_set(x_12, 4, x_11);
lean_ctor_set(x_12, 5, x_2);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_1, 5);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_2);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_2, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 1;
lean_ctor_set_uint8(x_15, sizeof(void*)*8, x_21);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_1);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
x_26 = lean_ctor_get(x_15, 2);
x_27 = lean_ctor_get(x_15, 3);
x_28 = lean_ctor_get(x_15, 4);
x_29 = lean_ctor_get(x_15, 5);
x_30 = lean_ctor_get(x_15, 6);
x_31 = lean_ctor_get(x_15, 7);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_32 = 1;
x_33 = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(x_33, 0, x_24);
lean_ctor_set(x_33, 1, x_25);
lean_ctor_set(x_33, 2, x_26);
lean_ctor_set(x_33, 3, x_27);
lean_ctor_set(x_33, 4, x_28);
lean_ctor_set(x_33, 5, x_29);
lean_ctor_set(x_33, 6, x_30);
lean_ctor_set(x_33, 7, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*8, x_32);
lean_ctor_set(x_2, 0, x_33);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_1);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_36 = lean_ctor_get(x_2, 1);
lean_inc(x_36);
lean_dec(x_2);
x_37 = lean_ctor_get(x_15, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_15, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_15, 2);
lean_inc(x_39);
x_40 = lean_ctor_get(x_15, 3);
lean_inc(x_40);
x_41 = lean_ctor_get(x_15, 4);
lean_inc(x_41);
x_42 = lean_ctor_get(x_15, 5);
lean_inc(x_42);
x_43 = lean_ctor_get(x_15, 6);
lean_inc(x_43);
x_44 = lean_ctor_get(x_15, 7);
lean_inc(x_44);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 lean_ctor_release(x_15, 2);
 lean_ctor_release(x_15, 3);
 lean_ctor_release(x_15, 4);
 lean_ctor_release(x_15, 5);
 lean_ctor_release(x_15, 6);
 lean_ctor_release(x_15, 7);
 x_45 = x_15;
} else {
 lean_dec_ref(x_15);
 x_45 = lean_box(0);
}
x_46 = 1;
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 8, 1);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_37);
lean_ctor_set(x_47, 1, x_38);
lean_ctor_set(x_47, 2, x_39);
lean_ctor_set(x_47, 3, x_40);
lean_ctor_set(x_47, 4, x_41);
lean_ctor_set(x_47, 5, x_42);
lean_ctor_set(x_47, 6, x_43);
lean_ctor_set(x_47, 7, x_44);
lean_ctor_set_uint8(x_47, sizeof(void*)*8, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_36);
lean_ctor_set(x_1, 5, x_48);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_1);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get(x_1, 1);
x_53 = lean_ctor_get(x_1, 2);
x_54 = lean_ctor_get(x_1, 3);
x_55 = lean_ctor_get(x_1, 4);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_1);
x_56 = lean_ctor_get(x_2, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_57 = x_2;
} else {
 lean_dec_ref(x_2);
 x_57 = lean_box(0);
}
x_58 = lean_ctor_get(x_15, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_15, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_15, 2);
lean_inc(x_60);
x_61 = lean_ctor_get(x_15, 3);
lean_inc(x_61);
x_62 = lean_ctor_get(x_15, 4);
lean_inc(x_62);
x_63 = lean_ctor_get(x_15, 5);
lean_inc(x_63);
x_64 = lean_ctor_get(x_15, 6);
lean_inc(x_64);
x_65 = lean_ctor_get(x_15, 7);
lean_inc(x_65);
if (lean_is_exclusive(x_15)) {
 lean_ctor_release(x_15, 0);
 lean_ctor_release(x_15, 1);
 lean_ctor_release(x_15, 2);
 lean_ctor_release(x_15, 3);
 lean_ctor_release(x_15, 4);
 lean_ctor_release(x_15, 5);
 lean_ctor_release(x_15, 6);
 lean_ctor_release(x_15, 7);
 x_66 = x_15;
} else {
 lean_dec_ref(x_15);
 x_66 = lean_box(0);
}
x_67 = 1;
if (lean_is_scalar(x_66)) {
 x_68 = lean_alloc_ctor(0, 8, 1);
} else {
 x_68 = x_66;
}
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_59);
lean_ctor_set(x_68, 2, x_60);
lean_ctor_set(x_68, 3, x_61);
lean_ctor_set(x_68, 4, x_62);
lean_ctor_set(x_68, 5, x_63);
lean_ctor_set(x_68, 6, x_64);
lean_ctor_set(x_68, 7, x_65);
lean_ctor_set_uint8(x_68, sizeof(void*)*8, x_67);
if (lean_is_scalar(x_57)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_57;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_56);
x_70 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_70, 0, x_51);
lean_ctor_set(x_70, 1, x_52);
lean_ctor_set(x_70, 2, x_53);
lean_ctor_set(x_70, 3, x_54);
lean_ctor_set(x_70, 4, x_55);
lean_ctor_set(x_70, 5, x_69);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_withInPattern___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 5);
x_6 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_3, 5, x_7);
x_8 = l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___rarg(x_3);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_1, x_2, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_10, 1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 5);
x_15 = l_List_tail_x21___rarg(x_14);
lean_dec(x_14);
lean_ctor_set(x_12, 5, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
x_18 = lean_ctor_get(x_12, 2);
x_19 = lean_ctor_get(x_12, 3);
x_20 = lean_ctor_get(x_12, 4);
x_21 = lean_ctor_get(x_12, 5);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_22 = l_List_tail_x21___rarg(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_22);
lean_ctor_set(x_10, 1, x_23);
return x_10;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_10, 1);
x_25 = lean_ctor_get(x_10, 0);
lean_inc(x_24);
lean_inc(x_25);
lean_dec(x_10);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_24, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_24, 3);
lean_inc(x_29);
x_30 = lean_ctor_get(x_24, 4);
lean_inc(x_30);
x_31 = lean_ctor_get(x_24, 5);
lean_inc(x_31);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 lean_ctor_release(x_24, 2);
 lean_ctor_release(x_24, 3);
 lean_ctor_release(x_24, 4);
 lean_ctor_release(x_24, 5);
 x_32 = x_24;
} else {
 lean_dec_ref(x_24);
 x_32 = lean_box(0);
}
x_33 = l_List_tail_x21___rarg(x_31);
lean_dec(x_31);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 6, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_26);
lean_ctor_set(x_34, 1, x_27);
lean_ctor_set(x_34, 2, x_28);
lean_ctor_set(x_34, 3, x_29);
lean_ctor_set(x_34, 4, x_30);
lean_ctor_set(x_34, 5, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_10);
if (x_36 == 0)
{
return x_10;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_10, 0);
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_10);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_40 = lean_ctor_get(x_3, 0);
x_41 = lean_ctor_get(x_3, 1);
x_42 = lean_ctor_get(x_3, 2);
x_43 = lean_ctor_get(x_3, 3);
x_44 = lean_ctor_get(x_3, 4);
x_45 = lean_ctor_get(x_3, 5);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_3);
x_46 = l_List_head_x21___at_Lean_Elab_getScope___spec__1(x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_48, 0, x_40);
lean_ctor_set(x_48, 1, x_41);
lean_ctor_set(x_48, 2, x_42);
lean_ctor_set(x_48, 3, x_43);
lean_ctor_set(x_48, 4, x_44);
lean_ctor_set(x_48, 5, x_47);
x_49 = l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___rarg(x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_apply_2(x_1, x_2, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_54 = x_51;
} else {
 lean_dec_ref(x_51);
 x_54 = lean_box(0);
}
x_55 = lean_ctor_get(x_52, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
x_57 = lean_ctor_get(x_52, 2);
lean_inc(x_57);
x_58 = lean_ctor_get(x_52, 3);
lean_inc(x_58);
x_59 = lean_ctor_get(x_52, 4);
lean_inc(x_59);
x_60 = lean_ctor_get(x_52, 5);
lean_inc(x_60);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 lean_ctor_release(x_52, 3);
 lean_ctor_release(x_52, 4);
 lean_ctor_release(x_52, 5);
 x_61 = x_52;
} else {
 lean_dec_ref(x_52);
 x_61 = lean_box(0);
}
x_62 = l_List_tail_x21___rarg(x_60);
lean_dec(x_60);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 6, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_55);
lean_ctor_set(x_63, 1, x_56);
lean_ctor_set(x_63, 2, x_57);
lean_ctor_set(x_63, 3, x_58);
lean_ctor_set(x_63, 4, x_59);
lean_ctor_set(x_63, 5, x_62);
if (lean_is_scalar(x_54)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_54;
}
lean_ctor_set(x_64, 0, x_53);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_51, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_51, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_67 = x_51;
} else {
 lean_dec_ref(x_51);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
lean_object* l_Lean_Elab_withInPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_withInPattern___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_modifyScope___at_Lean_Elab_withInPattern___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_inPattern___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_getScope___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*8);
lean_dec(x_4);
x_6 = lean_box(x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_2);
x_9 = lean_ctor_get_uint8(x_7, sizeof(void*)*8);
lean_dec(x_7);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
}
lean_object* l_Lean_Elab_inPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_inPattern___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_inPattern___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_inPattern(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_runIOUnsafe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_apply_1(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_dec(x_7);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
lean_dec(x_12);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 0, x_13);
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_runIOUnsafe(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_runIOUnsafe___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_runIOUnsafe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runIOUnsafe___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_runIO___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_ElabException_Inhabited___closed__2;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_runIO(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_runIO___rarg), 1, 0);
return x_4;
}
}
lean_object* l_Lean_Elab_runIO___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_runIO(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init_Control_Reader(lean_object*);
lean_object* initialize_Init_Lean_MetavarContext(lean_object*);
lean_object* initialize_Init_Lean_NameGenerator(lean_object*);
lean_object* initialize_Init_Lean_Scopes(lean_object*);
lean_object* initialize_Init_Lean_Parser_Module(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Elaborator_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Reader(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_MetavarContext(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_NameGenerator(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Scopes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Parser_Module(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_OpenDecl_Inhabited___closed__1 = _init_l_Lean_OpenDecl_Inhabited___closed__1();
lean_mark_persistent(l_Lean_OpenDecl_Inhabited___closed__1);
l_Lean_OpenDecl_Inhabited = _init_l_Lean_OpenDecl_Inhabited();
lean_mark_persistent(l_Lean_OpenDecl_Inhabited);
l_Lean_OpenDecl_HasToString___closed__1 = _init_l_Lean_OpenDecl_HasToString___closed__1();
lean_mark_persistent(l_Lean_OpenDecl_HasToString___closed__1);
l_Lean_ElabScope_Inhabited___closed__1 = _init_l_Lean_ElabScope_Inhabited___closed__1();
lean_mark_persistent(l_Lean_ElabScope_Inhabited___closed__1);
l_Lean_ElabScope_Inhabited = _init_l_Lean_ElabScope_Inhabited();
lean_mark_persistent(l_Lean_ElabScope_Inhabited);
l_Lean_ElabException_Inhabited___closed__1 = _init_l_Lean_ElabException_Inhabited___closed__1();
lean_mark_persistent(l_Lean_ElabException_Inhabited___closed__1);
l_Lean_ElabException_Inhabited___closed__2 = _init_l_Lean_ElabException_Inhabited___closed__2();
lean_mark_persistent(l_Lean_ElabException_Inhabited___closed__2);
l_Lean_ElabException_Inhabited = _init_l_Lean_ElabException_Inhabited();
lean_mark_persistent(l_Lean_ElabException_Inhabited);
l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__1);
l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1___closed__2);
l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinTermElabTable___spec__1);
l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__1);
l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1___closed__2);
l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1 = _init_l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1();
lean_mark_persistent(l_Lean_SMap_empty___at_Lean_mkBuiltinCommandElabTable___spec__1);
res = l_Lean_mkBuiltinTermElabTable(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_builtinTermElabTable = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_builtinTermElabTable);
lean_dec_ref(res);
res = l_Lean_mkBuiltinCommandElabTable(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_builtinCommandElabTable = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_builtinCommandElabTable);
lean_dec_ref(res);
l_Lean_addBuiltinTermElab___closed__1 = _init_l_Lean_addBuiltinTermElab___closed__1();
lean_mark_persistent(l_Lean_addBuiltinTermElab___closed__1);
l_Lean_addBuiltinTermElab___closed__2 = _init_l_Lean_addBuiltinTermElab___closed__2();
lean_mark_persistent(l_Lean_addBuiltinTermElab___closed__2);
l_Lean_addBuiltinCommandElab___closed__1 = _init_l_Lean_addBuiltinCommandElab___closed__1();
lean_mark_persistent(l_Lean_addBuiltinCommandElab___closed__1);
l_Lean_checkSyntaxNodeKind___closed__1 = _init_l_Lean_checkSyntaxNodeKind___closed__1();
lean_mark_persistent(l_Lean_checkSyntaxNodeKind___closed__1);
l_Lean_syntaxNodeKindOfAttrParam___closed__1 = _init_l_Lean_syntaxNodeKindOfAttrParam___closed__1();
lean_mark_persistent(l_Lean_syntaxNodeKindOfAttrParam___closed__1);
l_Lean_syntaxNodeKindOfAttrParam___closed__2 = _init_l_Lean_syntaxNodeKindOfAttrParam___closed__2();
lean_mark_persistent(l_Lean_syntaxNodeKindOfAttrParam___closed__2);
l_Lean_declareBuiltinElab___closed__1 = _init_l_Lean_declareBuiltinElab___closed__1();
lean_mark_persistent(l_Lean_declareBuiltinElab___closed__1);
l_Lean_declareBuiltinElab___closed__2 = _init_l_Lean_declareBuiltinElab___closed__2();
lean_mark_persistent(l_Lean_declareBuiltinElab___closed__2);
l_Lean_declareBuiltinElab___closed__3 = _init_l_Lean_declareBuiltinElab___closed__3();
lean_mark_persistent(l_Lean_declareBuiltinElab___closed__3);
l_Lean_declareBuiltinTermElab___closed__1 = _init_l_Lean_declareBuiltinTermElab___closed__1();
lean_mark_persistent(l_Lean_declareBuiltinTermElab___closed__1);
l_Lean_declareBuiltinTermElab___closed__2 = _init_l_Lean_declareBuiltinTermElab___closed__2();
lean_mark_persistent(l_Lean_declareBuiltinTermElab___closed__2);
l_Lean_declareBuiltinCommandElab___closed__1 = _init_l_Lean_declareBuiltinCommandElab___closed__1();
lean_mark_persistent(l_Lean_declareBuiltinCommandElab___closed__1);
l_Lean_declareBuiltinCommandElab___closed__2 = _init_l_Lean_declareBuiltinCommandElab___closed__2();
lean_mark_persistent(l_Lean_declareBuiltinCommandElab___closed__2);
l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1 = _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__1);
l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2 = _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__2);
l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3 = _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__3);
l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4 = _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__4);
l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5 = _init_l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___lambda__1___closed__5);
l_Lean_registerBuiltinTermElabAttr___closed__1 = _init_l_Lean_registerBuiltinTermElabAttr___closed__1();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__1);
l_Lean_registerBuiltinTermElabAttr___closed__2 = _init_l_Lean_registerBuiltinTermElabAttr___closed__2();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__2);
l_Lean_registerBuiltinTermElabAttr___closed__3 = _init_l_Lean_registerBuiltinTermElabAttr___closed__3();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__3);
l_Lean_registerBuiltinTermElabAttr___closed__4 = _init_l_Lean_registerBuiltinTermElabAttr___closed__4();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__4);
l_Lean_registerBuiltinTermElabAttr___closed__5 = _init_l_Lean_registerBuiltinTermElabAttr___closed__5();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__5);
l_Lean_registerBuiltinTermElabAttr___closed__6 = _init_l_Lean_registerBuiltinTermElabAttr___closed__6();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__6);
l_Lean_registerBuiltinTermElabAttr___closed__7 = _init_l_Lean_registerBuiltinTermElabAttr___closed__7();
lean_mark_persistent(l_Lean_registerBuiltinTermElabAttr___closed__7);
res = l_Lean_registerBuiltinTermElabAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1 = _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__1);
l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2 = _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__2);
l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3 = _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__3);
l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4 = _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__4);
l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5 = _init_l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___lambda__1___closed__5);
l_Lean_registerBuiltinCommandElabAttr___closed__1 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__1();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__1);
l_Lean_registerBuiltinCommandElabAttr___closed__2 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__2();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__2);
l_Lean_registerBuiltinCommandElabAttr___closed__3 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__3();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__3);
l_Lean_registerBuiltinCommandElabAttr___closed__4 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__4();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__4);
l_Lean_registerBuiltinCommandElabAttr___closed__5 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__5();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__5);
l_Lean_registerBuiltinCommandElabAttr___closed__6 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__6();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__6);
l_Lean_registerBuiltinCommandElabAttr___closed__7 = _init_l_Lean_registerBuiltinCommandElabAttr___closed__7();
lean_mark_persistent(l_Lean_registerBuiltinCommandElabAttr___closed__7);
res = l_Lean_registerBuiltinCommandElabAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_mkElabAttribute___rarg___lambda__2___closed__1 = _init_l_Lean_mkElabAttribute___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_mkElabAttribute___rarg___lambda__2___closed__1);
l_Lean_mkElabAttribute___rarg___closed__1 = _init_l_Lean_mkElabAttribute___rarg___closed__1();
lean_mark_persistent(l_Lean_mkElabAttribute___rarg___closed__1);
l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1 = _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1();
lean_mark_persistent(l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__1);
l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2 = _init_l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2();
lean_mark_persistent(l_Lean_registerEnvExtensionUnsafe___at_Lean_mkTermElabAttribute___spec__4___closed__2);
l_Lean_mkTermElabAttribute___closed__1 = _init_l_Lean_mkTermElabAttribute___closed__1();
lean_mark_persistent(l_Lean_mkTermElabAttribute___closed__1);
l_Lean_mkTermElabAttribute___closed__2 = _init_l_Lean_mkTermElabAttribute___closed__2();
lean_mark_persistent(l_Lean_mkTermElabAttribute___closed__2);
l_Lean_termElabAttribute___closed__1 = _init_l_Lean_termElabAttribute___closed__1();
lean_mark_persistent(l_Lean_termElabAttribute___closed__1);
l_Lean_termElabAttribute___closed__2 = _init_l_Lean_termElabAttribute___closed__2();
lean_mark_persistent(l_Lean_termElabAttribute___closed__2);
l_Lean_termElabAttribute___closed__3 = _init_l_Lean_termElabAttribute___closed__3();
lean_mark_persistent(l_Lean_termElabAttribute___closed__3);
res = l_Lean_mkTermElabAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_termElabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_termElabAttribute);
lean_dec_ref(res);
l_Lean_mkCommandElabAttribute___closed__1 = _init_l_Lean_mkCommandElabAttribute___closed__1();
lean_mark_persistent(l_Lean_mkCommandElabAttribute___closed__1);
l_Lean_mkCommandElabAttribute___closed__2 = _init_l_Lean_mkCommandElabAttribute___closed__2();
lean_mark_persistent(l_Lean_mkCommandElabAttribute___closed__2);
res = l_Lean_mkCommandElabAttribute(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_commandElabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_commandElabAttribute);
lean_dec_ref(res);
l_Lean_Elab_logElabException___closed__1 = _init_l_Lean_Elab_logElabException___closed__1();
lean_mark_persistent(l_Lean_Elab_logElabException___closed__1);
l_Lean_Elab_logUnknownDecl___rarg___closed__1 = _init_l_Lean_Elab_logUnknownDecl___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_logUnknownDecl___rarg___closed__1);
l_Lean_Elab_elabCommand___closed__1 = _init_l_Lean_Elab_elabCommand___closed__1();
lean_mark_persistent(l_Lean_Elab_elabCommand___closed__1);
l_Lean_Elab_elabCommand___closed__2 = _init_l_Lean_Elab_elabCommand___closed__2();
lean_mark_persistent(l_Lean_Elab_elabCommand___closed__2);
l_Lean_Elab_elabCommand___closed__3 = _init_l_Lean_Elab_elabCommand___closed__3();
lean_mark_persistent(l_Lean_Elab_elabCommand___closed__3);
l_Lean_Elab_absolutizeModuleName___closed__1 = _init_l_Lean_Elab_absolutizeModuleName___closed__1();
lean_mark_persistent(l_Lean_Elab_absolutizeModuleName___closed__1);
l_Lean_Elab_processHeaderAux___closed__1 = _init_l_Lean_Elab_processHeaderAux___closed__1();
lean_mark_persistent(l_Lean_Elab_processHeaderAux___closed__1);
l_Lean_Elab_processHeaderAux___closed__2 = _init_l_Lean_Elab_processHeaderAux___closed__2();
lean_mark_persistent(l_Lean_Elab_processHeaderAux___closed__2);
l_Lean_Elab_processHeaderAux___closed__3 = _init_l_Lean_Elab_processHeaderAux___closed__3();
lean_mark_persistent(l_Lean_Elab_processHeaderAux___closed__3);
l_Lean_Elab_testFrontend___closed__1 = _init_l_Lean_Elab_testFrontend___closed__1();
lean_mark_persistent(l_Lean_Elab_testFrontend___closed__1);
l_Lean_Elab_testFrontend___closed__2 = _init_l_Lean_Elab_testFrontend___closed__2();
lean_mark_persistent(l_Lean_Elab_testFrontend___closed__2);
l_Lean_Elab_testFrontend___closed__3 = _init_l_Lean_Elab_testFrontend___closed__3();
lean_mark_persistent(l_Lean_Elab_testFrontend___closed__3);
l_Lean_Elab_testFrontend___closed__4 = _init_l_Lean_Elab_testFrontend___closed__4();
lean_mark_persistent(l_Lean_Elab_testFrontend___closed__4);
l_Lean_Elab_anonymousInstNamePrefix___closed__1 = _init_l_Lean_Elab_anonymousInstNamePrefix___closed__1();
lean_mark_persistent(l_Lean_Elab_anonymousInstNamePrefix___closed__1);
l_Lean_Elab_anonymousInstNamePrefix___closed__2 = _init_l_Lean_Elab_anonymousInstNamePrefix___closed__2();
lean_mark_persistent(l_Lean_Elab_anonymousInstNamePrefix___closed__2);
l_Lean_Elab_anonymousInstNamePrefix = _init_l_Lean_Elab_anonymousInstNamePrefix();
lean_mark_persistent(l_Lean_Elab_anonymousInstNamePrefix);
l_Lean_Elab_rootNamespace___closed__1 = _init_l_Lean_Elab_rootNamespace___closed__1();
lean_mark_persistent(l_Lean_Elab_rootNamespace___closed__1);
l_Lean_Elab_rootNamespace___closed__2 = _init_l_Lean_Elab_rootNamespace___closed__2();
lean_mark_persistent(l_Lean_Elab_rootNamespace___closed__2);
l_Lean_Elab_rootNamespace = _init_l_Lean_Elab_rootNamespace();
lean_mark_persistent(l_Lean_Elab_rootNamespace);
l_Lean_Elab_resolveNamespace___closed__1 = _init_l_Lean_Elab_resolveNamespace___closed__1();
lean_mark_persistent(l_Lean_Elab_resolveNamespace___closed__1);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
