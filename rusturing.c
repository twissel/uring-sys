#include "liburing.h"

extern inline void rust_io_uring_cq_advance(struct io_uring *ring, unsigned nr)
{
    io_uring_cq_advance(ring, nr);
}

extern inline void rust_io_uring_prep_rw(int op, struct io_uring_sqe *sqe, int fd,
                                    const void *addr, unsigned len,
                                    off_t offset) {
    io_uring_prep_rw(op, sqe, fd, addr, len, offset);
}

extern inline void rust_io_uring_prep_readv(struct io_uring_sqe *sqe, int fd,
                                       const struct iovec *iovecs,
                                       unsigned nr_vecs, off_t offset)
{
    io_uring_prep_readv(sqe, fd, iovecs, nr_vecs, offset);
}


extern inline void rust_io_uring_prep_read_fixed(struct io_uring_sqe *sqe, int fd,
                                            void *buf, unsigned nbytes,
                                            off_t offset, int buf_index)
{
    io_uring_prep_read_fixed(sqe, fd, buf, nbytes, offset, buf_index);
}


extern inline void rust_io_uring_prep_writev(struct io_uring_sqe *sqe, int fd,
                                        const struct iovec *iovecs,
                                        unsigned nr_vecs, off_t offset)
{
    io_uring_prep_writev(sqe, fd, iovecs, nr_vecs, offset);
}


extern inline void rust_io_uring_prep_write_fixed(struct io_uring_sqe *sqe, int fd,
                                             const void *buf, unsigned nbytes,
                                             off_t offset, int buf_index)
{
    io_uring_prep_write_fixed(sqe, fd, buf, nbytes, offset, buf_index);
}

extern inline void rust_io_uring_prep_fsync(struct io_uring_sqe *sqe, int fd,
                                       unsigned fsync_flags)
{
    io_uring_prep_fsync(sqe, fd, fsync_flags);
}

extern inline void rust_io_uring_prep_nop(struct io_uring_sqe *sqe)
{
    io_uring_prep_nop(sqe);
}

extern inline void rust_io_uring_prep_poll_add(struct io_uring_sqe *sqe, int fd,
                                               short poll_mask)
{
    io_uring_prep_poll_add(sqe, fd, poll_mask);
}

extern inline void rust_io_uring_prep_poll_remove(struct io_uring_sqe *sqe,
                                             void *user_data)
{
    io_uring_prep_poll_remove(sqe, user_data);
}

extern inline void rust_io_uring_prep_timeout(struct io_uring_sqe *sqe,
                                         struct __kernel_timespec *ts,
                                         unsigned count, unsigned flags)
{
    io_uring_prep_timeout(sqe, ts, count, flags);
}

extern inline void rust_io_uring_prep_timeout_remove(struct io_uring_sqe *sqe,
                                                __u64 user_data, unsigned flags)
{
    io_uring_prep_timeout_remove(sqe, user_data, flags);
}