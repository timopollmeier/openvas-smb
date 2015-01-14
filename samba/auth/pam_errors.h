#ifndef __AUTH_PAM_ERRORS_H__
#define __AUTH_PAM_ERRORS_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

#ifndef _PUBLIC_
#define _PUBLIC_
#endif


/* The following definitions come from auth/pam_errors.c  */

NTSTATUS pam_to_nt_status(int pam_error);
int nt_status_to_pam(NTSTATUS nt_status);
NTSTATUS pam_to_nt_status(int pam_error);
int nt_status_to_pam(NTSTATUS nt_status);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __AUTH_PAM_ERRORS_H__ */
